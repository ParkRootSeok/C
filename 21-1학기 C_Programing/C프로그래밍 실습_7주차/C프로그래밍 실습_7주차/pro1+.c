#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i;
	int x[10];

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (x[i] % 2 == 0)
		{
			printf(" %d", x[i]);
		}
	}
}