//This program briefs about "Stack" data structure using "Singly linked Lists".

#include<bits/stdc++.h>
using namespace std;
class Stacknode
{
    public:
    int data;
    Stacknode* next;
    
};

int isEmpty(Stacknode* top) 
{ 
    return !top; 
} 

void push(Stacknode**top ,int newdata)
{  
    Stacknode* Node=new Stacknode();
    Node->data=newdata;
    Node->next=*top;
    *top=Node;
    cout<<newdata<<" is pushed into the Stack"<<endl;
}

void peek(Stacknode*  top)
{
   if (isEmpty(top)) 
        cout<<"Stack Underflow........"<<endl; 
    else
    {
        cout<<top->data<<" is on the top of the Stack"<<endl;
    }
}

void pop(Stacknode* top)
{
    if(isEmpty(top))
    {
        cout<<"Stack Underflow......."<<endl;
    }
    else
    {
        cout<<top->data<<" is popped from the Stack..."<<endl;
    }
}

int main()
{
    Stacknode*top=NULL;
    int sc,i,n;
    int arr[10000];
    cout<<"Enter the Stack Capacity: "<<endl;
    cin>>sc;
    cout<<"Stack of capacity "<<sc<<" is created........."<<endl;
    peek(top);
    cout<<"Enter the number of elements you want to add to the Stack:"<<endl;
    cin>>n;
    if(n>0)
    {
    cout<<"Enter the elements line by line:"<<endl;
    }
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(sc>=n)
    { 
     sc=n;
     for(i=0;i<sc;i++)
    {
       push(&top,arr[i]);
    }
    }
    else
    {
        for(i=0;i<sc;i++)
    {
       push(&top,arr[i]);
    }
    
        cout<<"Stack Overflow......Further additions into the Stack are not allowed.........."<<endl;
    }
    
        peek(top);
        pop(top);
}
