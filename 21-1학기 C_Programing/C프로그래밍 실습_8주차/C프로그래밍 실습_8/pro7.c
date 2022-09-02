#include <stdio.h>
#pragma warning(disable:4996)

int func2(int, int, int, int);

int main()
{
	int x, a, b, c;

	scanf("%d", &x);
	scanf(" %d %d %d", &a, &b, &c);

	printf("%d", func2(x, a, b, c));
}

int func2(int x, int a, int b, int c)
{
	return a * (x * x) + (b * x) + c;
}

