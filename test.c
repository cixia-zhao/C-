#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	while (scanf(" %d %d %d", &a, &b, &c) == 3)
	{
		if (a + b > c && a + c > b && b + c > a)
		{
			if (a == b == c)
			{
				printf("%s", "equ side");
			}
			else if (a == b || a == c || c == b)
			{

				printf("%s", "equ wrist");
			}
			else
			{
				printf("%s", "common ");

			}
		}
		else
		{
			printf("%s", "not triangle");
		}



	}

	return 0;

}
	
