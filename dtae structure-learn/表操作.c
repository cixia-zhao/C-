#include<stdio.h>

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
	Print(&s);
	printf("≤Â»Î∫Û\n");
	ListInsert(&s, 1, 12);
	Print(&s);
	return 0;
}
