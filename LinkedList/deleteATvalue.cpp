#include <iostream> 
#include <cstdio>
using namespace std;
struct Node{
    int data;
    struct Node * next;
    
};
void LinkedlistTraversal( struct Node* ptr){
    while (ptr != NULL){
        //printf("element :%d", ptr-> data);
        cout<< "Element :"<< ptr-> data <<endl;
        ptr= ptr-> next;
    }
}
struct Node*deleteATvalue ( Node* head, int value){
 struct Node*p= head;
 struct Node*q=head->next;
 while( q-> data != value && q->next !=NULL){
  p=p->next;
  q=q->next;
 }
 if (q->data== value){
    p->next = q->next;
    free(q);
 }
return head;
}
int main(){
    Node*head = new Node;
    Node*second = new Node;
    Node*third = new Node;
    Node*fourth = new Node;
     
    head -> data = 7;
    head -> next = second;
    second -> data =11;
    second -> next = third;
    third -> data = 66;
    third -> next = fourth ;
    fourth -> data = 100;
    fourth -> next = NULL;
head =deleteATvalue(head,66);
LinkedlistTraversal(head);
return 0;
}
