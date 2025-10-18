#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	
	int line = 0;
	scanf("%d", &line);
	for (int i = 0; i < line; i++)
	{
		for (int j = 0; j < line - 1 - i; j++)
		{
			printf(" ");

		}
		for (int j = 0; j < 2 * i+1; j++)
		{
			printf("*");

		}
		printf("\n");
	}
	for (int i = 0; i < line-1; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			printf(" ");

		}
		for (int j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");

		}
		printf("\n");
	}



	return 0;
}




