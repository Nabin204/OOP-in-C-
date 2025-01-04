#include<stdio.h>
#include<stdlib.h>
struct queue{
	int f,r,size;
	int* arr;
};

int IsFull(struct queue *q){
	if(q->r==q->size-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int IsEmpty(struct queue *q)
{
	if(q->f==q->r)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void Traversal(struct queue *q)
{
	int i;
	for(i=(q->f+1);i<=(q->r);i++)
	{
		printf("%d\n",q->arr[i]);
	}
}

void Enqueue(struct queue *q,int value)
{
	if(IsFull(q))
	{
			printf("Queue is full.\n");
	}
	else
	{
	q->r++;
	q->arr[q->r]=value;
}}

int Dequeue(struct queue *q)
{
	int a=-1;
	if(IsEmpty(q))
	{
			printf("Queue is empty.\n");
	}
	else
	{
	q->f++;
	a=q->arr[q->f];
}
	return a;
}

int main()
{
struct queue q;
q.f=-1;
q.r=-1;
q.size=10;
q.arr=(int*)malloc(q.size*sizeof(int));

Enqueue(&q,20);
Enqueue(&q,23);
Enqueue(&q,1);
Enqueue(&q,33);
printf("After enqueuing, the elements are:\n");
Traversal(&q);
printf("Dequeuing element:%d\n",Dequeue(&q));
printf("Dequeuing element:%d\n",Dequeue(&q));
printf("After dequeuing, the elements are:\n");
Traversal(&q);

if(IsEmpty(&q)){
	printf("Queue is empty.\n");
}
if(IsFull(&q)){
	printf("Queue is full.\n");
}
return 0;
}
