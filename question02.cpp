#include<iostream>
using namespace std;
class CLL;//forward declaration
class node
{
friend class CLL;
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
CountTriplets(int n)
{
    node *a=head;
    node *b=head;
    node *c=head;
    int count=0;
    while(1)
    {
        b=a->next;
        
        
    while(1)
    {
        c=b->next;  
        if(c==head)
        break;     
             while(1)
        {
        if(a->value+b->value+c->value==n && a!=b && b!=c && a!=c)
        {
          cout<<"{"<<a->value<<","<<b->value<<","<<c->value<<"}"<<" ";
          count++;
        }
        c=c->next;
        if(c==head)
        break;
        }
        
     
      b=b->next;
      if(b==head)
      break;
        
     
    }
    
    a=a->next;
    if(a==head)
    break;
    }
    cout<<endl<<"Number of triplets: "<<count<<endl;
}

insert(int v)
{
 node* temp=new node;
 temp->next=NULL;
 temp->value=v;
 temp->prev=NULL;
 node* t=head;
 if(head==NULL)
 {
  head=temp;
  head->prev=temp;
  head->next=temp;
 }
 else
 {
    while(t->next!=head->prev)
    {
        t=t->next;
    }
    t->next=temp;
    temp->prev=t;
    temp->next=head->prev;
 }
 
}
deleteE(int n)
{
    node* t=head;
    if(head==NULL)
    cout<<"Element Cannot be deleted"<<endl;
    else if(n==1 && head!=NULL)
    {
        
        while(1)
        {
           t=t->next;
           if(t->next==head->prev)
           break;
        }
        head=head->next;
         delete head->prev;
        head->prev=head;
        t->next=head;
    }
    
    else
    {
       while(n-1!=1)
       {
        t=t->next;
        n--;
       }
       if(t->next->next==head)
       {
         delete t->next;
         t->next=head->prev;
       }
       else
       {
       node*ptr =t->next;
       t->next=t->next->next;
       t->next->prev=t;
       delete ptr;
       }
    }
 
}
void display()
 {
   
    node* t=head;
    while(1)
    {
      cout<<t->value<<" ";
      t=t->next;
      if(t==head->prev)
      break;
    }
    cout<<endl;
 }
};
int main()
{
  CLL s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(5);
  s.display();
  s.CountTriplets(120.);
//   s.deleteE(4);
    return 0;
}