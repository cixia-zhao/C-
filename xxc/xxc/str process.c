#include<stdio.h>
#include<string.h>

int main()
{
	char str[10001];
	printf("ÇëÊäÈë×Ö·û´®");
	fgets(str, 10001, stdin);
	int len = strlen(str);
	if (len > 0 && str[len - 1] == '\n')
	{
		str[len - 1] = '\0';
		len--;

	}
	for (int i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = 'A' + ('z' - str[i]);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = 'a' + ('Z' - str[i]);
		}

	}
	printf("convert outcomd: %s\n",str);
	return 0;
}

