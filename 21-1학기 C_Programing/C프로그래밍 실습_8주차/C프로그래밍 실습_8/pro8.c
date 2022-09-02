#include <stdio.h>
#pragma warning(disable:4996)

int func2(int, int, int, int);

int main()
{
	int x, fa, fb, fc;
	int ga, gb, gc;

	scanf("%d", &x);
	scanf(" %d %d %d", &fa, &fb, &fc);
	scanf(" %d %d %d", &ga, &gb, &gc);

	printf("%d", func2(func2(x, fa, fb, fc), ga, gb, gc));
}

int func2(int x, int a, int b, int c)
{
	return a * (x * x) + (b * x) + c;
}

