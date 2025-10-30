#define _CRT_SECURE_NO_WARNINGS
#define MAXSIZE 10
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;
typedef struct
{

	ElemType data[MAXSIZE];
	int top;
}Sqstack;

void InitStack(Sqstack* s)
{

	s->top = -1;
	printf("ջ�ѳ�ʼ��\n");
}
bool IsEmpty(Sqstack* s)
{
	if (s->top == -1)
	{
		return true;
	}
	else
	{

		return false;
	}
}
bool IsFull(Sqstack* s)
{
	if (s->top == MAXSIZE-1)
	{
		return true;
	}
	else
	{

		return false;
	}
}

bool Push(Sqstack* s, ElemType e)
{
	if (IsFull(s))
	{
		printf("ջ���ˣ�%d�޷���\n", e);
		return false;

	}
	s->top++;
	s->data[s->top] = e;
	printf("Ԫ��%d�ɹ���ջ��ջ������Ϊ%d\n", e, s->top);
	return true;

}

int main()
{
	Sqstack Mystack;
	InitStack(&Mystack);
	Push(&Mystack,10);
	return 0;
}