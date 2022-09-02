#include <stdio.h>
#pragma warning(disable:4996)

int add(int);

int main()
{
	int N, sum;
	scanf("%d", &N);

	sum = add(N);

	if (sum % 2 == 0) printf("%d", sum / 2);
	else printf("%d", sum * 2);

	return 0;
}

int add(int x)
{
	int i, sum = 0;

	for (i = 0; i <= x; i++)
	{
		sum += i;
	}

	return sum;
}