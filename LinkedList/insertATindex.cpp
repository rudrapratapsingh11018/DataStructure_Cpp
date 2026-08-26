#include <iostream>
#include <cstdio>
using namespace std;
struct Node {
    int data;
    struct Node* next;
Node( int d) : data(d) , next (NULL) {}
};
void trvsl(struct Node* ptr){
    while( ptr !=NULL){
        cout<< "Element :"<< ptr->data <<endl;
      ptr= ptr->next;
    }
}
Node*insertATindex(Node *head, int data , int index){
    Node*ptr = new Node(data);
    Node*p = head;
    int i =0 ;
    if (index ==0){
        ptr->next= head;
        return ptr;
    }

    while ( i!= index -1   &&  p!=NULL){
        p=p-> next;
        i++;
    }
   /* if (p==NULL){
        cout<<"index out of bounds for insertions "<<endl;
        delete ptr;
        return head;
    }
    */
   
    ptr-> next = p-> next;
    p-> next= ptr;
    return ptr;
}
int main (){
Node*head= new Node(10);
Node*second = new Node(20);
Node*third = new Node(30);
Node*fourth = new Node(40);

head->next = second;
second-> next = third;
third-> next= fourth;
fourth ->next= NULL;

head= insertATindex( head, 15,3);
trvsl(head);
return 0;
}

