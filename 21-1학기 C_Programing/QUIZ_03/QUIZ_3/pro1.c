#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N, n1, n2, n3, n4, to, res;

	scanf("%d", &N);

	n1 = N / 1000; 
	N %= 1000;
	n2 = N / 100;
	N %= 100;
	n3 = N / 10;
	N %= 10;
	n4 = N;

	to = n1 + n2 + n3 + n4;

	printf("%d\n", to);

	res = 5 < to && to < 15 || 25 < to;

	printf("%d\n", res);

	return 0;
}