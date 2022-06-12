#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};

// insert at head.
void insertAtHead(node* &head, int val){
    node* n= new node(val);
    n->next=head;

    if(head!=NULL){
       head->prev=n;
    }
    head=n;
}

// insertion of node at last
void insertAtTail(node* &head, int val){

    if(head==NULL){
        insertAtHead(head,val);
        return;
    }

    node* n = new node(val);
    node* temp = head;

    while(temp->next != NULL){
        temp=temp->next;
    }

    temp->next=n; //new val
    n->prev = temp; //prev of new node attached with the next of the prev node. 
}

//display function
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,5);
    display(head);
    insertAtTail(head,6);
    display(head);
    return 0;
}