#include <stdio.h>
#include<stdlib.h>
typedef struct stack{
    int data;
    struct stack *next;
}node;
int isempty(node * ptr){
    if (ptr == NULL) return 1;
    return 0;
}
int isfull(node *ptr ){
    node * temp=(node *)malloc(sizeof(node));
    if(temp==NULL) return 1;
    return 0;
}
void printstack(node *head){
    node *p=head;
    while (p!= NULL)
    {
        printf("%d ",p->data);
        p=p->next;
        /* code */
    }
    printf("\n");
}
node *push(node * top,int data){
    if (isfull(top)){
        printf("stack overflow\n");
        return top;
    }
    node *ptr=(node *)malloc(sizeof(node));

     ptr->data=data;
     ptr->next=top;
     top=ptr;
     return top;
}
int pop(node **top){
    if(isempty(*top)) {
    printf("stack underflow\n");
    exit(0);
    }
     node *p=*top;
     *top=(*top)->next;
     int n=p->data;
     free(p);
     return n;
    //  return p->data;
}
int  peak( node *top,int pos)


{
    node *p=top;
    for (int i = 0; (i < pos-1 && p!=NULL); i++)
    {
        p=p->next;
    }
    
    if(p!=NULL) return p->data;
    printf("invalid pos\n");
    exit(0);
}
int main(){
   node * top=(node*)malloc(sizeof (node));
   top=NULL; 
   printf(" Before push empty or not =%d\n",isempty(top));
   printf(" Before push full or not =%d\n",isfull(top));
   top=push(top,10);
   printstack(top);
   top=push(top,20);
   printstack(top);
   top=push(top,30);
   printstack(top);
//    top=push(top,40);
//    printstack(top);
//    top=push(top,50);
//    printstack(top);

   int element=pop(&top);
   printf("poped element is %d\n",element);
   printstack(top);
//    element=pop(&top);
//    printf("poped element is %d\n",element);
//    printstack(top);
  
   printf("element at pos %d is %d \n",2,peak(top,2));
  
//    printf(" after push empty or not =%d\n",isempty(top));
//    printf(" after push full or not =%d\n",isfull(top));
    return 0;
}