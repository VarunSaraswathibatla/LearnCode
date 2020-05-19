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
{   Stacknode* Node=new Stacknode();
    Node->data=newdata;
    Node->next=*top;
    *top=Node;
    cout<<newdata<<" is pushed into the stack"<<endl;
}
void peek(Stacknode*  top)
{
   if (isEmpty(top)) 
        cout<<"Stack Underflow........"<<endl; 
    else
    {
        cout<<top->data<<" is on the top of the stack"<<endl;
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
        cout<<top->data<<" is popped from the stack..."<<endl;
    }
}
int main()
{
    Stacknode*top=NULL;
    peek(top);
    push(&top,100);
      push(&top,200);
        push(&top,300);
        peek(top);
        pop(top);
}
