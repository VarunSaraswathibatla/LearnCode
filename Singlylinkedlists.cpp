/*This program briefs about linked lists data structures and insertion,deletion of nodes*/

#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
Node* next;
int data;
};

void insertfirst(Node**head,int newdata)
{
    Node* newnode=new Node();
    newnode-> data=newdata;
    newnode->next=*head;
    *head=newnode;
    
}

void append(Node**head,int newdata)
{
    Node* newnode=new Node();
    newnode->data=newdata;
    Node* last=*head;
    newnode->next=NULL;
    if(*head==NULL)
    {
        *head=newnode;
        return;
    }
    while(last->next != NULL)
    {
        last=last->next;
    }
    last->next=newnode;
}

void insert(Node** head,int pos,int newdata)
{  
    int i;
    Node* prev=*head;
    for(i=1;i<pos;i++)
   {
    prev=prev->next;
   }
   
    Node* newnode=new Node();
    newnode->data=newdata;
    newnode->next=prev->next;
    prev->next=newnode;
}

void del(Node **head_ref, int key) 
{ 
    
     Node* temp = *head_ref, *prev; 
  
    
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;   
        free(temp);               
        return; 
    } 
  
    
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
  
    
    if (temp == NULL) return; 
  
    
    prev->next = temp->next; 
  
    free(temp);  
} 

int main()
{
    Node* head=NULL;
    insertfirst(&head,10);
    append(&head,30);
    insert(&head,1,15);
    insert(&head,2,20);
    insertfirst(&head,5);
    insert(&head,4,22);
    insert(&head,5,25);
    del(&head,22);
    
     
    
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
        
    }
    }
