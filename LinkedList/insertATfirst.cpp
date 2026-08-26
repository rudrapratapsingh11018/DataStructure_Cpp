/*
#include <iostream>
#include <cstdio>
using namespace std;
struct Node {
    int data;
    struct Node * next ;
// create a constructor to initialize data and pointer 
Node(int d): data(d),  next(NULL) {}
};
void linkedListTraversal(struct Node*ptr){
    while (ptr != NULL){
        cout<<"Element :"<< ptr->data<<endl;
        ptr= ptr->next;
    }
}
// create a fn to insert a node at the starting/first
Node*insertATfirst(Node*head,int data){
    Node*ptr= new Node(data);
    ptr->next= head;
    return ptr;
}
int main (){
    Node*head =new Node(10);
    Node*second =new Node(20);
    Node*third =new Node(30);
    Node*fourth =new Node(50);
    
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;


    head = insertATfirst(head,5);
    linkedListTraversal(head);
    return 0;
}
  */
#include <iostream>
#include <cstdio>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    // creating a constructor ptr
    
    Node(int d): data(d),  next(NULL) {}
};
void trvsl(struct Node*ptr){
    while( ptr!=NULL){
        cout<<"Element:"<<ptr->data<<endl;
        ptr= ptr ->next;

    }
}
Node*insertATfirst( Node*head, int data){
    Node*ptr= new Node(data);
    ptr->next=head;
    return ptr;
}
int  main(){
    Node*head = new Node(30);
    Node*second= new Node(40);
   
    head->next=second;
    second->next=NULL;

head = insertATfirst(head, 5);
trvsl(head);
return 0;
}


























