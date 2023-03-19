#include<bits/stdc++.h>
using namespace std;
class node
{
public:
node* prev;
int value;
node* next;
};
class CLL
{
node* head;
public:
CLL()
{
    head=NULL;
}
insert(int v)
{
node* ptr= new node;
ptr->value=v;
if(head==NULL)
{
    head=ptr;
    ptr->next=head;
    ptr->prev=head;
}
else
{
    node *p=head;
    while(p->next!=head)
    {
      p=p->next;
    }
    p->next=ptr;
    ptr->prev=p;
    ptr->next=head;
}
}
largestnode()
{
    int s=INT_MIN;
    node*p=head;
    while(1)
    {
     if(s<p->value)   
     s=p->value;
     p=p->next;
     
     if(p==head)
     break;
    }
    cout<<"The largest node is: "<<s;
}
};
int main()
{
CLL s;
s.insert(1);
s.insert(9);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(6);
s.largestnode();
}