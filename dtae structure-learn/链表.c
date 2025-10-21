
#include <stdio.h>
#include <stdlib.h>

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
int main()
{


	return 0;
}
