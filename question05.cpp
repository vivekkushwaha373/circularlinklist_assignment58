#include<iostream>
using namespace std;
class node
{
  public:
  node*prev;
  int value;
  node*next;
};
class DLL
{
   node* head;
   public:
   DLL()
   {
    head=NULL;
   }
   node* RLL()
   {
    return head; 
   }
   insert(int v)
   {
   node* ptr=new node;
   ptr->value=v;
   ptr->prev=NULL;
   if(head==NULL)
   {
    head=ptr;
    ptr->next=NULL;
   }
   else
   {
    node *p=head;
    while(p->next!=NULL)
    {
      p=p->next;
    }
    p->next=ptr;
    ptr->prev=p;
    ptr->next=NULL;
   }
   }
   void display()
   {
    node *p=head;
    if(p==NULL)
    {
       cout<<"There is no Element to be displayed"<<endl;
    }
    else
    {
    while(p!=NULL)
    {
       cout<<p->value<<" ";
       p=p->next;
    }
    cout<<endl;
    }
   }
};
void CinCLL(DLL &y)
{
node* p=y.RLL();

while(p->next!=NULL)
{
p=p->next;
}
p->next=y.RLL();
y.RLL()->prev=p;
}
void printagain(DLL &z)
{

node* p=z.RLL();
while(1)
{
cout<<p->value<<" ";
p=p->next;
if(p==z.RLL())
break;
}
}
int main()
{
DLL s;
s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(6);
s.display();
CinCLL(s);
printagain(s);
return 0;
}