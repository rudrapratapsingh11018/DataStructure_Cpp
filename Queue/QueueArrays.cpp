#include <iostream>
#include <cstdio>
using namespace std;
struct queue{
    int size ;
    int f ;//front 
    int r;// rare 
    int * arr;
};
int isEmpty(struct queue *q){
    if(q->f == q->r){
        cout<<"Queue is Empty!!"<<endl;
        return 1;
    }
    else{return 0;}
}

int isFull(struct queue *q){
  if (q->r== q->size-1){
    return 1;
  }
  else{
    return 0;
  }
}
void enqueue(struct queue*q, int val){
    if (isFull(q)){
        cout<<"This Queue is Full"<<endl;
   }
   else{
    q->r = q-> r+1;// rare(r) ko aage badhaya phir usme value dal diya
    // q->r++;
    q->arr[q->r] = val; //q ki kon si index par? q ki r index pr
   }
}

int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        cout<<"This Queue is Full"<<endl;
    }
    else{
        q->f ++;
        a = q->arr[q->f];
        return a;
    }
}
int main(){
    struct queue q ;
    q.size=100;
    q.f = q.r = -1;
    q.arr= new(int);

    enqueue(&q,15);
    enqueue(&q,12);
    enqueue(&q,20);

    printf("Dequeuing Element %d\n", dequeue(&q));
    printf("Dequeuing Element %d\n", dequeue(&q));

    if(isFull(&q)){
        cout<<"Queue is Full"<<endl;
    }
    if (isEmpty(&q)){
        cout<<"Queue is Empty"<<endl;
    }
    else{
        cout<<"Total size of the queue is :"<<q.size<<endl;
        cout<<"Queue is Neither Full nor Empty!!"<<endl;
     }
    return 0;
}
