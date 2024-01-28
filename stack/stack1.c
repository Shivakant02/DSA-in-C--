#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int size;
    int top;
    int *arr;

} stack;
int isempty(stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    return 0;
}

int isfull(stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    return 0;
}
void push(stack *s, int data)
{
    if (isfull(s))
    {
        printf("Stack overflow\n");
        
    }
    else
    {
        s->top++;
        s->arr[s->top]=data;
    }
}
int pop(stack *s)
{
    if (isempty(s)){
        printf("stack underflow\n ");
        exit(0) ;
    }
    else{
        int val=s->arr[s->top];
       s-> top--;
        return val;
    }
}
int peak(stack *s,int  i)
{
    if (s->top-i+1<0) 
    {
        printf("invalid position\n");
        exit(0);
    }
    else
    {
        return s->arr[s->top-i+1];
    }
}

int main()
{
    stack *s = (stack *)malloc(sizeof(stack));
    s->size = 6;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    printf(" before push , %d\n",isfull(s));
    printf("before push , %d\n",isempty(s));
    push(s,10);
    push(s,20);
    push(s,30);
    push(s,40);
    push(s,50);
    push(s,60);
    
    
    printf("poped element is %d\n",pop(s));
    // printf("poped element is %d\n",pop(s));
    // printf("poped element is %d\n",pop(s));
    // printf("poped element is %d\n",pop(s));
    // printf("poped element is %d\n",pop(s));
    // printf("poped element is %d\n",pop(s));
    // printf("poped element is %d\n",pop(s));
    // printf("poped element is %d\n",pop(s));
    // printf("poped element is %d\n",pop(s));
    // printf("poped element is %d\n",pop(s));
    // printf("poped element is %d\n",pop(s));
    // printf("poped element is %d\n",pop(s));
    // printf("poped element is %d\n",pop(s));
    for (int j=1;j<=s->top +1;j++)
    {
    printf("  element at position %d  is %d\n",j,peak(s,j));
        
    }
//     printf("after push , %d\n",isfull(s));
//    printf("after push  , %d\n",isempty(s));

    return 0;
}