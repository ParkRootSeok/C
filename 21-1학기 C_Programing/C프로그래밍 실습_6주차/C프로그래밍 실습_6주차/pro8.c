#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, m, fac = 1;
	int i, j;

	scanf("%d %d", &n, &m);

	for (i = n; i <= m; i++)
	{
		printf("%d!=1", i);

		fac = 1;

		for (j = 2; j <= i; j++)
		{
			printf("*%d", j);
			fac *= j;
		}

		printf("=%d\n", fac);
		
	}
}