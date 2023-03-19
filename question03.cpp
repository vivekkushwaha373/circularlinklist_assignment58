#include<bits/stdc++.h>
using namespace std;
class node
{
public:
node *prev;
int value;
node *next;
};
class DLL
{
 node *head;
 public:
 node* LADD()
 {
   return head;
 }
 DLL()
 {
    head=NULL;
 }
 insert(int v)
 {
   node *ptr=new node;
   ptr->prev=NULL;
   ptr->value=v;
   if(head==NULL)
   {
    head=ptr;
    ptr->next=head;
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
display()
   {
    node *p=head;
    while(1)
    {
     cout<<p->value<<" ";
     p=p->next;
     if(p==head)
     break;
    }

   }
};
int IsCircular(DLL x)
{
node *p=x.LADD();
while(1)
{
 
     p=p->next;
     if(p==x.LADD())
     return 1;
     if(p==NULL)
     return 0;
}
}
int main()
{
  DLL s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(6);
  if(IsCircular(s))
  {
    cout<<"Link list is circular"<<endl;
; }
  else
  {
    cout<<"Link list is not circular"<<endl;
  }
  return 0;
}