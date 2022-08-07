#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtEnd(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

// Iterative way
node* reverse_list(node* &head){
    node* prev=NULL;
    node* cur=head;
    node* nextPtr;      

    if(head==NULL or head->next==NULL){
        return head;
    }

    while(cur!=NULL){
        nextPtr=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nextPtr;
    }
    return prev;
}

// Recursive way
node* reverseRec(node* &head){
    if(head==NULL or head->next==NULL)
        return head;
    node* newhead = reverseRec(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

// Reverse k nodes
node* reversek(node* &head,int k){
    if(head==NULL and head->next==NULL)
        return head;

    node* prev=NULL;
    node* curr=head;
    node* nextptr;
    int count=0;

    while(curr!=NULL and count<k){
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
        count++;
    }

    if(nextptr!=NULL){
        head->next = reversek(nextptr,k);
    }

    return prev;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main()
{
    node* head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtEnd(head,6);
    display(head);
    cout<<"\nAfter reversing the list:\n";
    node* newhead=reverseRec(head);
    display(newhead);
    int k=2;
    node* newhead2 = reversek(head,k);
    cout<<"\nAfter reversing k nodes:\n";
    display(newhead2);
    return 0;
}