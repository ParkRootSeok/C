#include <stdio.h>
#pragma warning(disable:4996)

int func1(int x);

int main()
{
	int n;

	scanf("%d", &n);

	printf("%d", func1(n));
}

int func1(int x)
{
	return 2 * (x * x) - (5 * x) + 1;
}