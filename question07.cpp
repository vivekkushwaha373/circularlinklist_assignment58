#include<iostream>
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
node* ptr=new node;
ptr->value=v;
if(head==NULL)
{
    head=ptr;
    head->prev=head;
    head->next=ptr;
}
else
{
    node* p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->prev=p;
    ptr->next=head;
    head->prev=ptr;
}

}
deleteALLnode()
{
    node *p=head;
    node *t;
    while(1)
    {
        if(p->value%2!=0)
        {
            t=p;
            p->prev->next=p->next;
            p->next->prev=p->prev;
            // p=p->prev;
            if(p==head)
            {
                head=p->next;
                p=head;
                continue;
            }
            else
            {
                p=p->prev;
            
            }
            delete t;
        }
        
        p=p->next;
        if(p==head)
        break;
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
int main()
{
CLL x;
x.insert(1);
x.insert(3);
x.insert(3);
x.insert(5);
x.insert(10);
x.deleteALLnode();
x.display();
}