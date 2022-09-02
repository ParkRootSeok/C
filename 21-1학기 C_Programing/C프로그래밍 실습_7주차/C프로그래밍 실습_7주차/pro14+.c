#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j;
	char x[10], y[10];

	for (i = 0; i < 10; i++)
	{
		scanf("%c", &x[i]);
	}
	getchar();
	for (i = 0; i < 10; i++)
	{
		scanf("%c", &y[i]);
	}

	for (i = 0; i < 10; i++)
	{
		printf(" %c %c", x[i], y[i]);
	}
}