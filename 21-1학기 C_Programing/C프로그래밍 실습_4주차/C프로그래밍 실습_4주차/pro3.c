#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, res;

	scanf("%d", &n);

	res = n / 100 % 10;

	printf("%d\n", res);

	return 0;
}