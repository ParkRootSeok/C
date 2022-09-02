#include <stdio.h>
#pragma warning(disable:4996)

int sum(int);

int main()
{
	int i, N, total;

	scanf("%d", &N);

	total = 0;
	for (i = 1; i <= N; i++)
	{
		total += sum(i);
	}

	printf("%d", total);
}

int sum(int n)
{
	return n * (n + 1) / 2;
}