#include<iostream>
using namespace std;
class DLL;
class node
{
friend class DLL;
node* prev;
int value;
node* next;
};
class DLL
{
node* head;
public:
DLL()
{
    head=NULL;
}
insert(int v)
{
node* ptr=new node;
ptr->value=v;
ptr->prev=NULL;
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
void nodeCount()
{
    int n=0;
    node*p=head;
    if(p==NULL)
    {cout<<"Node count is : "<<n<<endl;
    
    }
else
{
while(1)
    {
        p=p->next;
        n++;
        if(p==head)
        break;
    }
cout<<"Node count is : "<<n<<endl;
}
    
}

void display()
{
    node* p=head;
    if(p==NULL)
    {
     cout<<"there is no data to be displayed"<<endl;    
    }
    else
    {
     while(1)
    {
        cout<<p->value<<" ";
        p=p->next;
        if(p==head)
        break;
    }
    cout<<endl;
    }
    
}
};
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
  s.nodeCount();
    return 0;
}