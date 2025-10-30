#include <stdio.h>
#include <stdbool.h>

#define MAXSIZE 10
typedef int ElemType;
typedef struct
{
	ElemType data[MAXSIZE];
	int front;
	int rear;


} SqQueue;

void InitQueue(SqQueue* Q)
{
	Q->front = 0;
	Q->rear = 0;
	printf(" 已经初始化\n")

}

bool Is_Empty(SqQueue* Q)
{
	if (Q->front == Q->rear)
	{

		return true;
	}
	else
	{
		return false;
	}
}
bool Is_Full(SqQueue* Q)
{
	if (Q->rear + 1 == Q->front)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool EnQueue(SqQueue* Q,ElemType *e)
{
	if(Is_Full(Q))
	{ 
		printf("满了\n");
		return false;
	}
	Q->data[Q->rear] = e;
	Q->rear = (Q->rear + 1) % MAXSIZE;
	printf("success 入队");
	return true;
}