#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, i, j, k = 0;
	scanf("%d", &n);
	k = n - 1;

	for (i = n; 0 < i; i--)
	{
		for (j = 0; j < (i + k); j++)
		{
			printf("*");
		}
		printf("\n");
		k--;
	}
}