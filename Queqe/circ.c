#include <stdio.h>
#include <stdlib.h>
 
 typedef struct queue{
    int size;
    int f;
    int r;
    int *arr;
 }queue;
  queue *getqueue( ){
    queue *q=(queue*)malloc(sizeof(queue));
    q->size=10;
    q->f=q->r=0;
    q->arr=(int *)malloc(q->size*sizeof(int));

    return q;
 }
 void enqueue(queue *q,int data)
 {
    if((q->r+1)%q->size==q->f){
        printf("queue overflow!\n");
        exit(0);
    }
    q->r=(q->r+1)%q->size;

     q->arr[q->r]=data;
 }
 int dequeue(queue *q)
 {
    if(q->f==q->r)
    {
        printf("queue underflow!\n");
        exit(0);
    }
    q->f=(q->f+1)%q->size;
     return q->arr[q->f];
 }
 void printqueue(queue *q)
{
    for (int i = q->f+1; i <= q->r; i++)
    {
       printf("%d ",q->arr[i]);
    }
    printf("\n");
}

int main()
{
 queue *q=getqueue();
 
 enqueue(q,10);
 enqueue(q,20);
 enqueue(q,30);
 enqueue(q,40);
 enqueue(q,50);
 enqueue(q,60);
 enqueue(q,70);
 enqueue(q,80);
 enqueue(q,90);
 printqueue(q);
 
 dequeue(q);


 dequeue(q);
 dequeue(q);
 dequeue(q);
 dequeue(q);
 dequeue(q);
 dequeue(q);

 
 dequeue(q);




 return 0;
}