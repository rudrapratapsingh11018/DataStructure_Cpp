#include <iostream>
#include <cstdio>
using namespace std;
struct Node{
    int data;
    struct Node*next;

};
void LinkedListTraversal(struct Node* ptr){// let=>  Nodes's pointer = ptr
    while(ptr != NULL){ // jab tak pointer = 0 nahi ho jata tab tak niche likha gya code chalao...
        cout<<"|"<<ptr->data<<"|"<<endl;
        ptr = ptr->next;
        
    }cout<<"----"<<endl;
}
int isEmpty(struct Node*top){  //head = top 
    if (top ==NULL){  
        return 1; // stack is empty !!
        cout<<"stack is Empty"<<endl;
    }
    else{
        return 0;  // else is not Empty !
    }

}
int isFull(struct Node*top){
    struct Node* p=new (Node);
    if (p==NULL){
        return 1;
    }
    else{
        return 0;
    }


}
struct Node*push(struct Node *top, int x){
    struct Node *n = new Node;
    if (isFull(top)){// agar top full hoga ?? matlab ki ab pure stack me ek bhi element nahi daala ja skta
        cout<<"stack overflow"<<endl;
    }
    else{// agar jagah hua tb ...
        n-> data = x;
        n-> next = top;
        top = n;
        return top;
    }
}
int pop(struct Node**top){ // using double pointer to ignore infinite Loop
    if (isEmpty(*top)){
        cout<<"stack is Empty ; Nothing can be popped out!"<<endl;
    }
    else{
        struct Node*n= *top;
        *top= (*top)->next;
        int x = n->data;
        free(n);
        return x;
        
    }

}

int main(){
    struct Node *top =NULL;
    top =push(top,80);
    top =push(top,70);
    top =push(top,78);
    top= push(top,99);
    cout<<"before pop !  My stack ==>"<<endl<<endl;
    LinkedListTraversal(top);
    cout<<"First Element is Popped 1st"<<endl;
    int element =pop(&top); // double pointer's Address
    LinkedListTraversal(top);
    cout<<"popped element is|"<<element<<"|"<<endl;
    return 0;
}