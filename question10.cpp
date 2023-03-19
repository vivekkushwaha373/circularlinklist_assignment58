//linklist reversal;
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
Reverse()
{
node*t1=head;
node*t2=head;

node*p=head;
while(1)
{
if(head->next==p)
{
    head->next=t1;
    head->prev=p;
    break;
}
t2=head->next;
head->next=t1;
head->prev=t2;
p->next=t2;
t1=head;
head=t2;
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
    cout<<"The largest node is: "<<s<<endl;
}
display()
{
    node* ptr=head;
    while(1)
    {
      cout<<ptr->value<<" ";
      ptr=ptr->next;
      if(ptr==head)
      {
        break;
      }
    }
    cout<<endl;
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
s.display();
s.Reverse();
s.display();
}