#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int size ;
    int f;
    int r;
    int *arr;

}queue;

int isfull(queue *q)
{
    if (q->r==q->size-1) return 1;
    return 0;
    
}
int isempty(queue*q)
{
    if(q->f==q->r) return 1;
    return 0;
}
  
  void enqueue(queue *q,int data)
{
    if(isfull(q))
    {
        printf("queue overflow!\n");
        exit(0);
    }
    q->r=q->r+1;
    q->arr[q->r]=data;
}
int dequeue(queue *q)
{
    if(isempty(q)) 
    {
        printf("no elt. in queue!\n");
        exit (0);
    }
    q->f++;
    return q->arr[q->f];
}

void printqueue(queue *q)
{
    for (int i = 0; i <= q->r; i++)
    {
       printf("%d ",q->arr[i]);
    }
    printf("\n");
}
int main(){
    queue *q=(queue*)malloc(sizeof(queue));
    q->size=4;
    q->f=q->r=-1;
    q->arr=(int *)malloc(q->size*sizeof(int));
    printf("queue is empty %d\n",isempty(q));
    printf("queue is full %d\n",isfull(q));
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    enqueue(q,40);
    
    printqueue(q);
    printf("dequeued elt is %d\n",dequeue(q));
    // printqueue(q);
    printf("dequeued elt is %d\n",dequeue(q));
    // printqueue(q);
    printf("dequeued elt is %d\n",dequeue(q));
    printf("dequeued elt is %d\n",dequeue(q));
    printf("dequeued elt is %d\n",dequeue(q));
    // enqueue(q,10);
    // dequeue(q);
    // dequeue(q);
    // dequeue(q);
    // dequeue(q);
    // dequeue(q);
    // printf("queue is empty %d\n",isempty(q));
    // printf("queue is full %d\n",isfull(q));
    return 0;
}