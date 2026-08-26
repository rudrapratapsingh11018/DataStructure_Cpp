#include<iostream>
#include<cstdio>
using namespace std;
struct Mystack {
    int size;
    int top;
    int*arr;
};
int isEmpty(struct Mystack*ptr){
    if (ptr->top == -1){
        cout<<"yes"<<endl;
        return 1;
    }
    else{
        cout<<"No"<<endl;
        return 0;
    }
}
int isFull(struct Mystack*ptr){
    if (ptr->top == int(size)-1){
        return 1;
    }
    else{
        return 0;
    }
}
int  main(){
    cout<<"cheack whether the stack is Empty ?"<<endl;
    Mystack S;
    S.size= 80;
    S.top= -1;
    S.arr= new int[S.size];
    cout<<"stack is :"<<isEmpty(&S)<<endl;

    cout<<"size of Mystack is :"<<S.size<<endl;
    delete[] S.arr;
return 0;
    
}