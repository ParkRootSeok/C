#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, sum;
	int x[10], y[10], z[10];

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &y[i]);
	}

	for (i = 0; i < 10; i++)
	{
		z[i] = x[i] + y[i];
		printf(" %d", z[i]);
	}
}
