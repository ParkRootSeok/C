#include <stdio.h>
#pragma warning(disable:4996)

int add(int, int);

int main()
{
	int i, N, sum = 0;

	scanf("%d", &N);

	while (N > 0)
	{
		sum = add(sum, N);
		N--;
	}
	printf("%d", sum);
}

int add(int x, int y)
{
	return x + y;
}
	