#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int rollno;
	float m1;
	float m2;
	struct node *next;
};

struct node *cur,*temp,*first,*last,*temp1,*temp2,*current,*ind,*temp3,*node1,*node2,*prevnode1,*prevnode2;
struct node *curloop,*temploop,*temp1loop,*temp2loop,*temp3loop,*firstloop,*lastloop,*delloop;
int pos,i,cloop,nloop;
void insert();
void del();
void display();	





 // Creates a new node if nexted list is empty or else inserts at the end.
void insert()         
 {  
	cur=(struct node *)malloc(sizeof(struct node));

	printf("ENTER THE ROLL NUMBER:\n");
	scanf("%d",&cur->rollno);

	printf("ENTER MARKS 1:\n");
	scanf("%f",&cur->m1);

	printf("ENTER MARKS 2:\n");
	scanf("%f",&cur->m2);
//Empty List
	if(first==NULL) 
	{ 
		first=cur;
		last=cur;
		cur->next=NULL;
	}
	// Insert at last.
	 else 
	{ 
		last->next=cur;
		last=cur;
		cur->next=NULL;
	}
}
void insertbeg() // Inserts a node in the beginning
{
	cur=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE ROLL NUMBER:\n");
	scanf("%d",&cur->rollno);
	printf("ENTER MARKS 1:\n");
	scanf("%f",&cur->m1);
	printf("ENTER MARKS 2:\n");
	scanf("%f",&cur->m2);
	if(first!=NULL) // If list is not empty
	{

		cur->next=first;
		first=cur;
	}
	else 
	{
		cur->next=NULL;
		first=cur;
		last=cur;
	}

}
void insertatpos() // inserts a node at a given postion
{
	if(first==NULL)
	{
		printf("List is Empty!!!\n");
	}
	else 
	{
		printf("Enter the position\n");
		scanf("%d",&pos);
		cur=(struct node*)malloc(sizeof(struct node));

		if(pos<1) 
		{
			printf("Invalid Position\n");
			return;
		}
		if(pos==1) 
		{
			insertbeg();
			return;
		}
	
		temp=first;

		for(i=0; i<pos-2; i++) 
		{
			if(temp->next!=NULL)
			{
				temp=temp->next;
			}
	        else
	        {
	        	printf("invalid position\n");
	        	return;
			}
		}
		printf("ENTER THE ROLL NUMBER:\n");
		scanf("%d",&cur->rollno);
		printf("ENTER MARKS 1:\n");
		scanf("%f",&cur->m1);
		printf("ENTER MARKS 2:\n");
		scanf("%f",&cur->m2);
		cur->next=temp->next;
		temp->next=cur;
		if(cur->next==NULL)
		{
			last=cur;
		}
	}

}

// Deletes the entire nexted List.
void del() 
{
	if(first==NULL) {
		printf("List is Empty to be deleted\n");
	} 
	else
	 {
		while(first!=NULL) // Not an empty list
		 {
			cur=first;
			first=first->next;
			cur->next=NULL; // cur becomes isolated.
			printf("%d %.2f %.2f - Student entry node is deleted successfully...\n",cur->rollno,cur->m1,cur->m2);
			free(cur);
		}
		printf("All Nodes deleted successfully, Hence List is empty\n");
	}
}

void insertloop()
{
	curloop=(struct node *)malloc(sizeof(struct node));
	printf("ENTER THE ROLL NUMBER:\n");
	scanf("%d",&curloop->rollno);

	printf("ENTER MARKS 1:\n");
	scanf("%f",&curloop->m1);

	printf("ENTER MARKS 2:\n");
	scanf("%f",&curloop->m2);
	
	if(firstloop==NULL)
	{
		curloop->next=NULL;
		firstloop=curloop;
		lastloop=curloop;
		cloop++;
	}
	else
	{
		lastloop->next=curloop;
		curloop->next=NULL;
		lastloop=curloop;
		cloop++;
	}

	
}
void createloop()
{
	int rno,x;
	if(firstloop==NULL)
	{
		printf("Loop list is empty\n");
		return;
	}
	printf("\nEnter the node number from which you want to loop:\n");
	scanf("%d",&rno);
	
	if(rno>cloop||cloop<1)
	{
		printf("\nLoop not possible cause node is out of range\n");
		createloop();
	}
	temploop=firstloop;
	for(x=0;x<rno-1;x++)
	{
		temploop=temploop->next;
	}
		nloop=rno;
		
		printf("\n Loop is created successfully\n");
		printf("%d rollnumber is looped with %d rollnumber\n",lastloop->rollno,temploop->rollno);
}

void lengthloop()
{
	if(cloop==0)
	{
		printf("\nEmpty List\n");
		return;
	}
	if(nloop==0)
	{
		printf("\nLoop is not created yet!!!\n");
		return;
	}
	printf("\n Length of the Loop in the Looped Linked List is: %d\n",(cloop-nloop));
}
void intersectionloop()
{
    int n=0;
    temp1=first;
    temp2=firstloop;
    if(temp1==NULL)
    {
    	printf("\nFirst List is Empty!!!\n");
    	return;
	}
	if(temp2==NULL)
	{
		printf("\nLooped Linked list is Empty!!!\n");
		return;
	}
	for(temp1=first;temp1!=NULL;temp1=temp1->next)
    {
        for(temp2=firstloop;temp2!=NULL;temp2=temp2->next)
        {
            if(temp1->m1==temp2->m1 && temp1->m2==temp2->m2)
            {
                printf("Intersection point at roll number %d and %d\n",temp1->rollno,temp2->rollno);
                n++;
            }
        }
    }
    if(n==0)
    {
        printf("\nNo Intersection point found\n");
    }
}

void displayloop()
{
	if(firstloop==NULL)
	{
		printf("\nLinked Loop List is Empty\n");
		return;
	}
	printf("\nThe Looped Linked List Elements are\n");
	if(nloop!=0)
	{
		curloop=firstloop;
		while(curloop!=NULL)
		{
			if(curloop->rollno==temploop->rollno)
			{
			printf("\n\nRoll No :%d\nMarks1: %.2f\nMarks 2: %.2f ------ is a looped element with Roll Number %d\n",curloop->rollno,curloop->m1,curloop->m2,lastloop->rollno);
			
			}
			else
			{
			
			printf("%d %.2f %.2f\n",curloop->rollno,curloop->m1,curloop->m2);
		}
		curloop=curloop->next;
}
}
else
{
	curloop=firstloop;
		while(curloop!=NULL)
		{
			
			
			printf("%d %.2f %.2f\n",curloop->rollno,curloop->m1,curloop->m2);
		curloop=curloop->next;
}
}		
}




void delatfirst() // Deletes first node of the list.
{
	if(first==NULL) 
	{
		printf("List is Empty to be deleted\n");
	} else 
	{
		cur=first;
		first=first->next;
		cur->next=NULL;
		printf("Deleted Entry is: %d %.2f %.2f\n",cur->rollno,cur->m1,cur->m2);
		free(cur);
	}
}

void delatend() // Deletes the last node of the list
{
	if(first==NULL) 
	{
		printf("\nList is empty to be deleted\n");
		return;
	} else if(first->next==NULL) // More than one node.
	{
		printf("Deleted Entry is: %d %.2f %.2f\n",first->rollno,first->m1,first->m2);
		first=NULL;
		return;
	} else 
	{
		cur=first;
		while(cur->next->next!=NULL) 
		{
			cur=cur->next;
		}
		temp=cur->next;
		printf("Deleted Entry is: %d %.2f %.2f\n",temp->rollno,temp->m1,temp->m2);
		cur->next=NULL;
		last=cur;
		free(temp);
	}

}
void delatposloop() // Deletes a node at a given position in LOOP LINKED LIST.
{
    int in;
	if(firstloop==NULL) 
	{
		printf("\nList is Empty!!!\n");
		return;
	}
	printf("\nEnter the position of the node to be deleted:\n");
	scanf("%d",&in);
	if(in<1) 
	{
		printf("\nInvalid Position\n");
		return;
	}
	if(in==1) 
	{
		if(firstloop==NULL) 
	{
		printf("\nLoop Linked List is Empty to be deleted\n");
		return;
	} 
	else 
	{
		curloop=firstloop;
		firstloop=firstloop->next;
		curloop->next=NULL;
		if(nloop!=0)
		{
			if(curloop->rollno==temploop->rollno)
			{
				nloop=0;
			}
		}
		printf("\nDeleted Entry is: Roll no %d\nMarks 1 %.2f\nMarks 2: %.2f\n",curloop->rollno,curloop->m1,curloop->m2);
		free(curloop);
		cloop=cloop-1;
		return;
	}
	}
	

	else 
	{
		delloop=firstloop;
		for(i=0; i<in-2; i++) 
		{
			if(delloop->next!=NULL) 
			{
				
				delloop=delloop->next;
			} 
			else
		     {
				printf("\nOut of limit position\n");
				return;
			}
		}
		if(delloop->next!=NULL) 
		{
				if(nloop!=0)
		{
			if(delloop->next->rollno==temploop->rollno)
			{
				nloop=0;
			}
			
		}
			printf("Deleted  Entry is Roll no %d\n Marks 1: %.2f\n Marks 2 %.2f\n",delloop->next->rollno,delloop->next->m1,delloop->next->m2);
			free(delloop->next);
			cloop=cloop-1;
			delloop->next=delloop->next->next;
		} 
		else
		 {
			printf("Out of limit position\n");
		}
		if(delloop->next==NULL)
		{
			lastloop=delloop;
			nloop=0;
		}

	}
}
void delatpos() // Deletes a node at a given position.
{
	if(first==NULL) 
	{
		printf("List is Empty!!!\n");
		return;
	}
	printf("\nEnter the position of the node to be deleted: \n");
	scanf("%d",&pos);
	if(pos<1) 
	{
		printf("Invalid Position\n");
		return;
	}
	if(pos==1) 
	{
		delatfirst();
		return;
	}
	

	else 
	{
		temp=first;
		for(i=0; i<pos-2; i++) 
		{
			if(temp->next!=NULL) 
			{
				
				temp=temp->next;
			} else {
				printf("\nOut of limit position\n");
				return;
			}
		}
		if(temp->next!=NULL) 
		{
			printf("Deleted  Entry is ROll No :%d\nMarks 1:  %.2f\nMarks 2: %.2f\n",temp->next->rollno,temp->next->m1,temp->next->m2);
			free(temp->next);
			temp->next=temp->next->next;
		}
		 else
	    {
			printf("\nOut of limit position\n");
		}
		if(temp->next==NULL)
		{
			last=temp;
		}

	}
}
int len()
{
	int count=0;
	if(first==NULL)
	{
		printf("\nList is Empty");
		return 0;
	}
	else
	{
		cur=first;
		while(cur!=NULL)
	    {
		
		   count++;
		   cur=cur->next;
	    }
	
	}
	printf("\nLength of the Linked List is : %d\n",count);
	return(count);	
}

void displaynfromlast()
{

	int pos,l=0,i;
	
	temp1=first;
	temp2=first;
	if(temp1==NULL)
	{
		printf("\n----List is empty!!!!----\n");
		return;
	}
	printf("\nEnter the position from end: ");
	scanf("%d",&pos);
	while(temp1!=NULL)
	{
		temp1=temp1->next;
		l++;
	}
	if(pos>l || pos<=0)
	{
		printf("\nPosition out of range\n");
		return;
	}
	else
	{
		for(i=1;i<l-pos+1;i++)
		{
			temp2=temp2->next;
		}
	}
	printf("Data at node %d from end is %d %.2f %.2f\n",pos,temp2->rollno,temp2->m1,temp2->m2);
}
void searchite()
{
	temp=first;
	int rno,count=1;
	printf("\nEnter the roll no. to be searched:\n");
	scanf("%d",&rno);
	
	while(temp!=NULL)
	{
		if(temp->rollno==rno)
		{
			printf("\nRoll number :%d\nMarks of Subject 1: %f\nMarks of Subject 2: %f\nPosition: %d\n",temp->rollno,temp->m1,temp->m2,count);
			return;
		}
		temp=temp->next;
		count++;
	}
	
	printf("Roll no. %d not found!\n",rno);
}

void findMiddle()
{
	int count=len();
    if(count<=2)
    {
    	printf("\nNo middle node exists\n");
    	return;
	}
	else 
	{
		int i=0;
	    
		temp=first;
	    for(i=0;i<=(count/2)-1;i++)
		{
			temp=temp->next;
			
		}
		printf("Roll Number: %d\n", temp->rollno);
		printf("M1: %f\n", temp->m1);
		printf("M2: %f\n\n", temp->m2);
	}

}
void nthnode()
{
	int p,count=1;
	cur=first;
	printf("\nEnter the Node value:\n");
	scanf("%d",&p);
	if(first==NULL)
	{
		printf("\nLIST IS EMPTY!!!\n");
	}
	while(cur!=NULL)
	{
		if(count==p)
		{
			printf("Roll Number: %d\n",cur->rollno);
			printf("Marks 1: %.2f\n",cur->m1);
			printf("Marks 2: %.2f\n",cur->m2);
			
		}
		count++;
		cur=cur->next;
	}
	if(p>count)
	{
		printf("\nINVALID\n");
	}
}
void lasttofirst()
{
	if(first==NULL)
	{
		printf("No elements are present\n");
	}
	else if(first->next==NULL)
	{
		printf("Only one element is present\n");
	}
	else
	{
		cur=first;
		while(cur->next->next!=NULL)
		{
			cur=cur->next;
		}
		temp=cur->next;
		cur->next=NULL;
		temp->next=first;
		first=temp;
		last=cur;
		
	}
}
void pair_swap()
{
	struct node *swapper;
	temp1=first;
	while(temp1!=NULL && temp1->next!=NULL)
    {
		swapper=(struct node *)malloc(sizeof(struct node));
		swapper->rollno=temp1->rollno;
		swapper->m1=temp1->m1;
		swapper->m2=temp1->m2;
		temp1->rollno=temp1->next->rollno;
		temp1->m1=temp1->next->m1;
		temp1->m2=temp1->next->m2;
		temp1->next->rollno=swapper->rollno;
		temp1->next->m1=swapper->m1;
		temp1->next->m2=swapper->m2;
		free(swapper);
		temp1=temp1->next->next;
    }
    printf("\nSuccessfully Pair-Swapped...\n");
    display();
}
/*number of times m1 and m2 are repaeating */
void countofrep()
{
	int arr1[100],visit1[100],arr2[100],visit2[100];
	int i,j,count1,count2,c;
	temp1=first;
	c=len();
	if(first==NULL)
	{
		printf("\nEmpty list!!!!!!!");
	}
	else
	{
	    for(i=0;i<c;i++)
	    {
		    arr1[i]=temp1->m1;
		    arr2[i]=temp1->m2;
	        visit1[i]=-1;
		    visit2[i]=-1;
		    temp1=temp1->next;
	    }
	    for(i=0; i<c; i++)
        {
            count1=1;
            count2=1;
            for(j=i+1; j<c; j++)
            {
                if(arr1[i]==arr1[j])
                {
                    count1++;
                    visit1[j] = 0;
                }
                if(arr2[i]==arr2[j])
                {
            	    count2++;
            	    visit2[j]=0;
			    }
            }
            if(visit1[i]!=0)
            {
                visit1[i]=count1;
            }
            if(visit2[i]!=0)
		    {
        	    visit2[i]=count2;
		    }
        }
        printf("\nRepetition of marks in m1:\n");
        for(i=0; i<c; i++)
        {
            if(visit1[i]>=1)
            {
                printf("\n%d repeats %d time(s)\n", arr1[i], visit1[i]);
            }
        }
        printf("\nRepetition of marks in m2:\n");
        for(i=0;i<c;i++){
    	    if(visit2[i]>=1)
		    {
        	    printf("\n%d repeats %d time(s)\n", arr2[i], visit2[i]);
		    }
	    }
    }
}
void swap()
{
    int n1,n2;
	printf("\n Enter the Roll Numbers to be Swapped\n");
	scanf("%d",&n1);
	scanf("\n%d",&n2);
	node1=first;
	node2=first;
	struct node *temp4;
	
	if(n1==n2)
	{
		printf("\n Same Roll Numbers can't be swapped\n");
		return;
	}
	while(node1->rollno!=n1 && node1!=NULL)
	{
		prevnode1=node1;
		node1=node1->next;
	}
	if(node1==NULL)
	{
		printf("\n Swapping not possible\n");
		return;
	}
	while(node2->rollno!=n2 && node2!=NULL)
	{
		prevnode2=node2;
		node2=node2->next;
	}
	if(node2==NULL)
	{
		printf("\n Swapping not possible\n");
		return;
	}
	else
	{
	
	
		temp4=(struct node *)malloc(sizeof(struct node));
	
		temp4->rollno=node1->rollno;
		temp4->m1=node1->m1;
		temp4->m2=node1->m2;
		
		node1->rollno=node2->rollno;
		node1->m1=node2->m1;
		node1->m2=node2->m2;
		
		node2->rollno=temp4->rollno;
		node2->m1=temp4->m1;
		node2->m2=temp4->m2;
		free(temp4);
		printf("\n The Given Two Nodes are Swapped successfully\n");
    }
    display();
}

void sorter()
 {  
         
        cur = first;
        if(first == NULL)
		{ 
			printf("\nEmpty List!!!\n"); 
            return;  
        }  
        else 
		{  
            while(cur != NULL)
			 {  
                temp = cur->next;  
                while(temp != NULL)
				 {  
                	temp3 = (struct node *)malloc(sizeof(struct node)); 
                   
                    if(cur->rollno > temp->rollno)
					{  
                        temp3->rollno = cur->rollno;
						temp3->m1 = cur->m1;
						temp3->m2 = cur->m2;  
                        cur->rollno = temp->rollno; 
						cur->m1 = temp->m1; 
						cur->m2 = temp->m2;  
                        temp->rollno = temp3->rollno; 
						temp->m1 = temp3->m1;
						temp->m2 = temp3->m2; 
					}  
                    temp = temp->next;  
                }  
                cur = cur->next;  
            }      
        }
		printf("\n Linked List is Sorted Sucessfully....\n")  ;
}  

void delduplicate()
{
	cur=first;
	if(first==NULL)
	{
		printf("\nList is empty!!!\n");
		return;
	}
	else if(first->next==NULL)
	{
		printf("\nOnly one element in List\n");
		return;
	}
	else
	{
		 while (cur!= NULL && cur->next != NULL)
   		 {
        	temp=cur;
 
        
        	while (temp->next != NULL)
        	{
            
            	if (cur->rollno == temp->next->rollno)
            	{
               
                	temp1 = temp->next;
                	temp->next = temp->next->next;
                	free(temp1);
            	}
            	else /* This is tricky */
                temp = temp->next;
        	}
        cur = cur->next;	
	}
	if(cur->next==NULL)
	{
		last=cur;
	}printf("Duplicate elements from Linked List are Removed Successfully\n");
	
	
}
}

void display() // Displays the List.
{
	
	if(first==NULL) // Empty List.	
	{
		printf("List is Empty!!!\n");
	} else 
	{	printf("\n The List elements are:\n");
		cur=first;
		printf("\n");
		while   (cur!=NULL) 
		{
			printf("\n\nRoll Number : %d \nMarks 1: %.2f\nMarks 2: %.2f \n",cur->rollno,cur->m1,cur->m2);
			cur=cur->next;
		}
	}
}
int main() 
{
	int ch;
	printf("\n---------------------------------------WELCOME TO LINKED LIST APP------------------------------------------------\n\n");

	while(1) 
	{
		printf("\n1.Insert at Last\n2.Insert at any position\n3.Insert at begining\n4.Delete the Entire linked list\n5.Delete the first entry\n6.Delete the last entry\n7.Delete the entry at a Position\n8.Length of linked list\n9.Display n'th node from last\n10.Search the RollNumber\n11.Print The Middle Entry\n12.Display Nth Node\n13.Place Last Entry First\n14.Pair-Swap the Linked List\n15.Swap the given two nodes\n16.Print number of times Marks1 and Marks2 are Repeating\n17.Delete Duplicate Roll-Numbers from list\n18.Delete duplicate elements from sorted elements\n19.Display\n20.Exit\n");
		printf("\n\nLOOP FUNCTIONS: These fuctions are applicable only to the created new Linked Loop List\n");
		printf("21.Insert\n22.Create Loop\n23.Length of the loop\n24.Intersection Point of List-1 and Looped Linked List\n25.Delete an Entry from the Looped Linked List\n26.Display\n27.Exit\n\n");
		
		scanf("%d",&ch);
		switch(ch) {
			case 1:
				insert();
				break;
				
			case 2:
				insertatpos();
				break;
			case 3:
			    insertbeg();
				break;	
					
			case 4:
				del();
				break;
				
			case 5:
				delatfirst();
				break;
			case 6:
				delatend();
				break;
			case 7:
				delatpos();
				break;
			case 8:
				len();
				break;
			case 9:
				displaynfromlast();
				break;
			case 10:
				searchite();
				break;	
			case 11:
				findMiddle();
				break;
			case 12:
				nthnode();
				break;	
			case 13:
				lasttofirst();
				break;
			case 14:
				pair_swap();
				break;
			case 15:
				swap();
				break;
			case 16:
				countofrep();
				break;
			case 17:
				delduplicate();
				break;
			case 18:
				delduplicate();
				sorter();
				break;	
			case 19:
				display();
				break;	
			case 20:
				return 0;
				break;
			case 21:
				insertloop();
				break;
			case 22:
				createloop();
				break;
			case 23:
				lengthloop();
				break;	
			case 25:
				delatposloop();
				break;
			case 24:
				intersectionloop();
				break;	
				
			case 26:
				displayloop();
				break;	
				
		
			case 27:
				exit(0);
				break;
			
			default:
				printf("Invalid choice\n");
				break;

		}
		printf("***********************************************************************************");


	}

}//Dev c++
