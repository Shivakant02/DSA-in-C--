#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack
{
    int size;
    int top;
    char *arr;

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
void push(stack *s, char data)
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
char pop(stack *s)
{
    if (isempty(s)){
        printf("stack underflow\n ");
        exit(0) ;
        // return -1;
    }
    else{
        char val=s->arr[s->top];
       s-> top--;
        return val;
    }
}
int paranthes(char *exp)
{
    
    stack *s=(stack*)malloc(sizeof(stack));
    s->size=strlen(exp);
    s->top=-1;
    s->arr=(char*)malloc(s->size*sizeof(char));
    for (int  i = 0; exp[i]!='\0'; i++)
    {
        if (exp[i]=='(')
        {
            push(s,'(');
        }
        else if (exp[i]==')')
        {
            if(isempty(s))
            {
                 return 0;
            }
            pop(s);
        }
        
        
        
        
    }
    if (isempty(s)) return 1;
        return 0;
}

int main()
{
    char *exp="(8*(8))2+3(2+2)(*1)";
    if(paranthes(exp)){
        printf("paranthes matched");

    }
    else{
        printf("paranthes not matched");
    }
    return 0;
}