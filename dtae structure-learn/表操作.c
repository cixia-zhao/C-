#include<stdio.h>
#include <stdbool.h>
typedef struct
{
	int data[10];
	int len;

}SqList;

void Init(SqList* s)
{
	for (int i = 0; i < 10; i++)
		s->data[i] = 0;
	s->len = 0;

}
void ListInsert(SqList* s, int i, int e)
{
	for (int j = s->len; j >= i; j--)
		s->data[j] = s->data[j - 1];

	s->data[i - 1] = e;
	s->len++;
}
bool ListDelete(SqList* s, int i, int* e)
{
	if (i<1 || i >s->len)
		return false;
	*e = s->data[i - 1];
	for (int j = i; j < s->len; j++)
		s->data[j - 1] = s->data[j];
	s->len--;
	return true;
}
int GetElem(SqList* s, int i)
{

	return s->data[i - 1];
}
void Print(SqList* s)
{
	printf("ciontext: [");
	for (int i = 0; i < s->len; i++)
	{
		printf("%d ", s->data[i]);

	}
	printf("],len: %d\n", s->len);
}
int main()
{
	SqList s; 
	Init(&s);
	ListInsert(&s, 1, 100); 
	ListInsert(&s, 2, 200); 
	printf("重新插入元素后:\n");
	Print(&s); 
	int foundElement = GetElem(&s, 1); 
	printf("通过 GetElem 找到的第一个元素是: %d\n", foundElement); 
	return 0;
}
