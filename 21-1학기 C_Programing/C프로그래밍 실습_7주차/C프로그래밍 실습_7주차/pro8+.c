#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j;
	int N, res;
	int x[10];

	scanf("%d", &N);

	for (i = 0; i < 10 && N > 0; i++)
	{
		res = N % 10;
		x[i] = res;
		N /= 10;
	}

	for (j = 0; j < i; j++)
	{
		printf(" %d", x[j]);
	}
}