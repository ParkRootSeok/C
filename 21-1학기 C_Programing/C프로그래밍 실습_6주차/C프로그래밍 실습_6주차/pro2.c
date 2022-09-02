#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n = 1, sum = 0;

	while (n != 0)
	{
		scanf("%d", &n);
		sum += n;
	}

	printf("%d", sum);
}