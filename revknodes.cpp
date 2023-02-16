#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertattail(node* &head,int val){
node *n=new node(val);
if(head==NULL){
    head=n;
    return;
}
node*temp=head;
while(temp->next!=NULL){
    temp=temp->next;
}
temp->next=n;
}

int sizeofll(node* &head){
    int count=1;
    node*temp=head;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

node* reversek(node* &head,int k,int size){
    if(k>size){
        return head;
    }
    node*prevptr=NULL;
    node*currptr=head;
    node*nextptr;
    int count=0;

    while(currptr!=NULL&&count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reversek(nextptr,k,size);
    }
    return prevptr;
}
void display(node* head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    node*head=NULL;
    insertattail(head,1);
     insertattail(head,2);
      insertattail(head,3);
       insertattail(head,4);
        insertattail(head,5);
       display(head);
       int s=sizeofll(head);
       int k=6;
       node*newhead=reversek(head,k,s);
       display(newhead);
    return 0;
}