#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n;

	scanf("%d", &n);

	n += 500;
	n = n / 1000 * 1000;

	printf("%d\n", n);

	return 0;
}