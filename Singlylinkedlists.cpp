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

void insert(Node* prev,int newdata)
{
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
  
    // If key was not present in linked list 
    if (temp == NULL) return; 
  
    
    prev->next = temp->next; 
  
    free(temp);  // Free memory 
} 

int main()
{
    Node* head=NULL;
    insertfirst(&head,10);
    append(&head,30);
    insert(head,20);
    insertfirst(&head,5);
    insert(head->next,15);
    insert(head->next->next->next,25);
    append(&head,40);
    insert(head->next->next->next->next->next,32);
    insert(head->next->next->next->next->next->next,35);
    del(&head,32); 
    
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
        
    }
    }
