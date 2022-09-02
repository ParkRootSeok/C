#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j;
	int N, num;
	int x[10];

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &x[i]);
	}

	num = 0;
	for (j = 0; j < i; j++)
	{
		num *= 10;
		num += x[j];
	}

	printf("%d", num);
}