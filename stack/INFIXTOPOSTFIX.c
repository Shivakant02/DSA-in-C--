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
        s->arr[s->top] = data;
    }
}
char pop(stack *s)
{
    if (isempty(s))
    {
        printf("stack underflow\n ");
        exit(0);
        return -1;
    }
    else
    {
        char val = s->arr[s->top];
        s->top--;
        return val;
    }
}
int stacktop(stack *s)
{
    return s->arr[s->top];
}
int prec(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 0;
}
int isoperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
        else
    return 0;
}
char *infixtopostfix(char *infix)
{
    stack *s = (stack *)malloc(sizeof(stack));
    s->size = strlen(infix) + 1;
    s->top = -1;
    s->arr=(char*)malloc(s->size*sizeof(char));
    char *postfix = (char *)malloc((strlen(infix)+1) * sizeof(char));
    int i = 0;
    int j = 0;
    while (infix[i] != '\0')
    {
        if (!isoperator(infix[i]))
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        
        else
        {
            if (prec(infix[i]) > prec(stacktop(s)))
            {
                push(s, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(s);
                j++;
            }
        }
    }
    while (!isempty(s))
    {
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char *infix = "(a-b)*c+d/e";
    char *post=infixtopostfix(infix);
    printf(" postfix exp is %s\n", post);

    return 0;
}