
#include <stdio.h>

int main()
{
	int a = 1;
	if (*(char*)&a == 1)
	{

		printf("С��");
	}
	else
	{

		printf("���");
	}

	return 0;
}
