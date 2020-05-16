/*  This program briefs about "Stack" data structures. */

#include<bits/stdc++.h>
using namespace std;
class Stack
{   
    int first=-1;
    int capacity;
    
    public:
    int arr[1000];
   
    bool push(int x,int capacity);
    int pop();
    int peek();
    bool isEmpty();
};
bool Stack::push(int x,int capacity)
{ if(first<=capacity-2)
{
    arr[first++]=x;
    cout<<x<<" is added in the Stack"<<endl;
    }
}
int Stack:: peek()
{
    if(first<0)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        cout<<"First element in the Stack is "<<arr[first]<<endl;
    }
    }
int Stack::pop()
{
     if(first<0)
    {
        cout<<"Stack Underflow........"<<endl;
    }
    else{
        cout<<arr[--first]<<" is popped/removed from the Stack"<<endl; 
    }
}
bool Stack::isEmpty()
{
    if(first<0)
    {cout<<"Stack is Empty"<<endl;}
    else
    {cout<<"Stack is not Empty"<<endl;}
}
int main()
{    int n,i,sc;
     int a[100];
    class Stack s;
    cout<<"Enter Stack capacity:"<<endl;
    cin>>sc;
    cout<<"Stack of size "<<sc<<" is created......."<<endl;
    s.isEmpty();
    s.pop();
    cout<<"Enter number of elements you wanted inside the Stack: "<<endl;
    cin>>n;
    cout<<"Enter the elements line by line:"<<endl;
    for(i=0;i<n;i++)
    {
       cin>>a[i]; 
    }
      for(i=0;i<n;i++)
    {
       s.push(a[i],sc);
    }
    if(sc<n)
    {
        cout<<"Stack Overflow.........."<<endl;
    }
   s.isEmpty();
   s.pop();
}
