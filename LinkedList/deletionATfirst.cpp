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
Node*deleteAThead(Node*head){
struct Node*ptr = head;
head = head-> next;
free(ptr);
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
LinkedlistTraversal(head);
cout<<"after deletion at first--->"<<endl;
head=deleteAThead(head);
LinkedlistTraversal(head);

return 0;
}
