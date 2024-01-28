#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->top== ptr->size -1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *ptr ,int value){

    if(isFull(ptr)){
        printf("stack overflow");
        exit(1);
    }
    else{
    ptr->top++;
    ptr->arr[ptr->top]=value;
    }
}
int pop(struct stack *ptr)
{
    if(isEmpty(ptr)){
        printf("stack underflow");
        return -1;
    }
    else
    {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}




int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->size=5;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    // s->top++;
    // s->arr[s->top]=25;
    push(s,20);
    push(s,20);
    pop(s);
    pop(s);
    pop(s);
    // push(s,20);
    // push(s,20);
    // push(s,20);
    // push(s,20);
    // printf("%d \n",s->top);
    
    if(isEmpty(s)){
        printf("stack is empty");
    }
    else{
        printf("stack is not empty");
    }
    
    return 0;
}