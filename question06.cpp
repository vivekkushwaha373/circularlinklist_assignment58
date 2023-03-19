#include<iostream>
using namespace std;
class node
{
public:
node* prev;
int value;
node* next;
};

class DLL
{
node *head;
public:
DLL()
{
    head=NULL;
}
node* returnA()
{
return head;
}
insert(int v)
{
node* ptr=new node;
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
ptr->next=head;
head->prev=ptr;
}

}
  void display()
{
    node *p=head;
    while(1)
    {
        cout<<p->value<<" ";
        p=p->next;
        if(p==head)
        break;
    }
    cout<<endl;
}  
    };
int count(DLL s)
{
    int n=0;
    node *p=s.returnA();
    while(1)
    {
        p=p->next;
        n++;
        if(p==s.returnA())
        return n;
    }

}

int checkequal(DLL x,DLL y)
{
int n1,n2,n=0;
n1=count(x);
n2=count(y);
if(n1!=n2)
return 0;
else
{
    node* p=x.returnA();
    node* q=y.returnA();
    while(1)
    {
        if(p->value==q->value)
        n++;
        p=p->next;
        q=q->next;
        if(p==x.returnA())
        break;
    }
    if(n==n1)
    return 1;
    else
    return 0;
}

}
int main()
{
DLL l1,l2;
l1.insert(1);
l1.insert(2);
l1.insert(3);
l1.insert(4);
l1.insert(5);
l1.insert(6);
//----------------------------------//
l2.insert(1);
l2.insert(2);
l2.insert(3);
l2.insert(4);
l2.insert(5);
l2.insert(0);
l1.display();
l2.display();
if(checkequal(l1,l2))
cout<<"Linklists are equal";
else
cout<<"Linklists are unequal";
    return 0;
}
