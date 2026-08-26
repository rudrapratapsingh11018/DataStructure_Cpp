#include<iostream>
#include<cstdio>
using namespace std;
    struct Node* f = NULL;
     struct Node *r = NULL;
struct Node {
    int data ;
    struct Node* next;

};
void linkedListTraversal(struct Node *ptr){
    while(ptr!= NULL){
        printf("Element : %d\n",ptr->data);
        ptr= ptr->next;
    }
}
void enqueue(int val){
   struct Node *n = new (Node);
   if (n== NULL){
    cout<<" Queue is FUll "<<endl;
   }
   else{
    n->data = val;
    n-> next = NULL;
    if (f==NULL){ 
        f=r=n;
    }
    else{
        r->next = n;
        r=n;
    }
   }
} 
int dequeue ()  {
    int val = -1; //set the value = -1
    struct Node *ptr = f ;
    if(f==NULL){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        f= f->next;
        val= ptr->data;
        free(ptr);
    }
    return val;
}

 int main(){
  enqueue(34);
  enqueue(43);
  enqueue(4);
  enqueue(3);
  printf("Dequeuing element %d\n", dequeue());
  printf("Dequeuing element %d\n", dequeue());
  printf("Dequeuing element %d\n", dequeue());
  printf("Dequeuing element %d\n", dequeue());
  linkedListTraversal(f);
  return 0;
 }