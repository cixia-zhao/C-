
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ElemType;
typedef struct LNode
{
	ElemType data;
	struct LNode* next;

}LNode,* LinkList;
int InitList(LinkList *L)
{
	*L = (LinkList)malloc(sizeof(LNode));
	if (*L == NULL)
		return 0;
	(*L)->next = NULL;
	return 1;
}		
int ListInsert(LinkList L, int i, ElemType e)
{
	if (i < 1)
	{
		return false;
	}
	LinkList p;
	int j = 0;
	p = L;
	while(p != NULL && j< i - 1)
	{
		p = p->next;
		j++;
	}
	if (p == NULL)
	{

		return false;
	}
	LinkList s = (LinkList)malloc(sizeof(LNode));
	if (s == NULL)
	{

		return 0;
	}
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}
int main()
{


	return 0;
}
