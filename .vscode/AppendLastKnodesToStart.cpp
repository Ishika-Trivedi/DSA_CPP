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

int length(node *head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
    
}
node* kappend(node* &head,int k){
    node* newHead;
    node* newTail;
    node* tail=head;
    int l=length(head);
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newTail=tail;
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;
    return newHead;

}
int main(){
    return 0;
}