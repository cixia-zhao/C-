#define _CRT_SECURE_NO_WARNINGS
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
int InsertNextNode(LinkList p, ElemType e)
{
	if (p == NULL)
	{
		return false;
	}
	LinkList s = (LinkList)malloc(sizeof(LinkList));
	if (s == NULL)
	{
		return false;
	}
	s->data = e;
	s->next = p->next;
	p->next = s;
	return true;
}
void PrintList(LinkList L) {
	LNode* p = L->next;
	while (p != NULL) {
		printf("%d -> ", p->data);
		p = p->next;
	}
	printf("NULL\n");
}
int InsertPriorNode(LinkList p, ElemType e)
{
	if (p == NULL)
	{
		return false;

	}
	LinkList s = (LinkList)malloc(sizeof(LNode));
	s->next = p->next;
	p->next = s;
	s->data = p->data;
	p->data = e;
	return true;


}
int DeleteNextNode(LinkList p, ElemType* e)
{
	if (p== NULL || p->next == NULL)
	{
		return false;

	}
	LinkList q = p->next;
	*e = q->data;
	p->next = q->next;
	free(q);
	return true;
}
LinkList GetElem(LinkList L, int i)
{
	if (i < 1)
	{
		return NULL;
	}

	LinkList p = L;
	int j = 1;
	while (p != NULL && j < i)
	{
		p = p->next;
		j++;

	}
	return p;

}
LinkList LocateElem(LinkList L, ElemType e)
{

	LinkList p = L;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return p;
}
LinkList CreateList_HeadInsert()
{
	int x = 0;
	LinkList L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	printf("输入存入数据：\n");
	scanf("%d", &x);
	while (x != 9999)
	{
		LinkList s = (LinkList)malloc(sizeof(LNode));
		if (s == NULL)
		{
			printf("error\n");
			return L;
		}
		s->data = x;
		s->next = L->next;
		L->next = s;
		scanf("%d", &x);

	}
	return L;
}
LinkList CreateList_TailInsert()
{
	int x = 0;
	LinkList L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;
	LinkList r = L;
	printf("输入数据");
	scanf("%d", &x);
	while (x != 9999)
	{
		LinkList s = (LinkList)malloc(sizeof(LNode));
		s->data = x;
		r->next = s;
		r = s;
		scanf("%d", &x);

	}
	r->next = NULL;
	return L;
}

int main()
{
	LinkList myList = CreateList_HeadInsert();
	printf("用尾插法创建好的链表是：\n");
	PrintList(myList);
	return 0;
}
