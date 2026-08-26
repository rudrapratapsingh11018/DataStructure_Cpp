#include <iostream>
#include <cstdio>
using namespace std;

struct circularQueue{
    int f;
    int r;
    int* arr;
    int size;
};
int isEmpty(struct circularQueue *q){
    if ( q->r = q->f){
        return 1;
    }
    return 0;
}
int isFull(struct circularQueue*q){
    if(( q->r+1) % q->size == q->f){
        return 1;
    }
    return 0;
}
void enqueue(struct circularQueue*q , int val){
    if(isFull(q)){
        printf("This Queue is full");
    }
    else{
        q->r=(q->r+1)% q->size;
        q->arr[q->r]= val;
    }
}
int dequeue(struct circularQueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is Empty");
    }
    else{
        q->f = (q->f +1)% q-> size;
        a= q-> arr[q->f]; // q->arr[q->f] = -1
    }
    return a;
}
int main(){
    struct circularQueue q;
    q.size =4;
    q.f= q.r=0;
    q.arr = new int[q.size];
    // we are Enqueue few elements 
    enqueue (&q, 12);
    enqueue (&q, 15);
    enqueue (&q, 1);
    printf("Dequeuing element %d \n" , dequeue(&q));
    printf("Dequeuing element %d \n" , dequeue(&q));
    printf("Dequeuing element %d \n" , dequeue(&q));
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);

    if(isEmpty(&q)){
        printf("queue is Empty \n");
    }
    if(isFull(&q)){
        printf("Queue is Full \n");
    }
    return 0;
}