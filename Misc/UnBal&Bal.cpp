#include<iostream>
#include<cstdio>
using namespace std;
struct stack{
 int size;
 int top;
 char *arr;
};

int isEmpty(struct stack*ptr){
    if(ptr->top ==-1){
        return 1;
        cout<<"stack is Empty"<<endl;
    }
    else{
        return 0;
    }
}


int isFull(struct stack*ptr){
    if(ptr->top ==ptr-> size-1){
        return 1;
        cout<<"stack is Full"<<endl;
            }
    else{
        return 0;
    }
}


void push(struct stack*ptr, char val){
    if(isFull(ptr)){
        cout<<"stack is Overflow!"<<endl;
    }
    else{
        ptr->top ++;
        ptr->arr[ptr->top]= val;
   }
}



char pop(struct stack*ptr){
    if(isEmpty(ptr)){
        cout<<"Stack is UnderFlow"<<endl;
        return -1;
    }
    else{
        char val = ptr-> arr[ptr->top]; // arr[ptr->top] = index!
        ptr->top--;
        return val;
    }
}


char stackTop(struct stack*sp){
   return sp->arr[sp->top];
}
int match(char a, char b){
    if(a=='{' && b=='}'){
        return 1;
    }
    if (a=='(' && b== ')'){
        return 1;
    }
    if (a=='[' && b==']'){
        return 1;
    }
    return 0;
}


int parentMatch(char*exp){
    struct stack*sp;
    sp->size = 100;
    sp-> top = -1;
    sp->arr =new [stack];
    char popped_ch;

for(int i=0 ; exp[i] != '\0'; i++)
{
    if (int i = 0; exp[i] =='{' || exp[i] =='(' || exp[i] =='[' ){
        push(sp,exp[i]);
    }
    else if(exp[i] =='}' || exp[i] ==')' || exp[i] ==']') {
        if (isEmpty(sp)){
            return 0;
          }
        popped_ch = pop(sp);
        if(!match(popped_ch, exp[i])){
            return 0;
        }
      }
    }
    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }


    int main(){
        char* exp= --------
    }
    
