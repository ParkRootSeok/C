#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, i, j;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) 
	{
		for (j = 1; j <= n; j++) 
		{
			if (i == j) printf(" X");

			else if (i + j == n + 1) printf(" X");

			else printf(" O");
		}
		printf("\n");
	}
}