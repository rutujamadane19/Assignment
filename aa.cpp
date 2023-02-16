#include<iostream>
#include<bits/stdc++.h>

using namespace std;
class node{
   public:
   int data;
   node* next;
   node(int d)
   {
      data=d;
      next=NULL;
   }
};
void insertt(node* &head,int d)
{


   node* temp=new node(d);
   if(head==NULL)
   {
      head=temp;
   }
   node* ptr=head;
   while(ptr->next!=NULL)
   {
      ptr=ptr->next;
   }
   ptr->next=temp;
}

void display(node* head)

{
   node* temp=head;
   while(temp!=NULL)
   {
      cout<<temp->data<<" ";
      temp=temp->next;
   }

}
int main()
{
node* head=NULL;
insertt(head,1);
insertt(head,2);
insertt(head,3);
display(head);
return 0;

}