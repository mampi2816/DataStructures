#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
};

Node* head;
Node* tail;

void Insert(int x){

    Node* temp=new Node();
    // Node* temp1=new Node();
    temp->prev=NULL;
    temp->data=x;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
        tail=temp;
        return;
    }

    // temp1=head;
    // while(temp1->next!=NULL){
    //     temp1=temp1->next;
    // }
    // temp1->next=temp;
    // temp->prev=temp1;
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    
}

void Print(){
    Node* temp=head;
    Node* temp1=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->prev;
    }
}


int main(){
    head=NULL;
    tail=NULL;
    int n,x;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        Insert(x);    
    }

    Print ();

    return 0;
}