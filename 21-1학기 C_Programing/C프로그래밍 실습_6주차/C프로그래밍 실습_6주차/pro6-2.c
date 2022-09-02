#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, i, j, k = 1;
	scanf("%d", &n);

	for (i = 1;i <= n;i++)
	{
		for (j = 1; j <= n;j++)
		{
			printf(" %d", k % 10);
			k++;
		}
		printf("\n");
	}
}