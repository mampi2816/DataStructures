#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head=NULL;
Node* node=head;

void insert(int val){
    Node* prev=NULL;
    while(node != NULL){
        prev=node;
        node=node->next;
    }
    node= new Node();
    node->data=val;
    node->next=NULL;
    if(!head){
        head=node;
    }else{
        prev->next=node;
    }
}
void print(){
    node=head;
    while(node){
        cout<<node->data<<" ";
        node=node->next;
    }
}
int main(){
    for(int i=0; i<10; i++){
       insert(i); 
    } 
    print();
    
    return 0;
}