#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, i, j;
	scanf("%d", &n); // 5

	for (i = 1; i <= n; i++) // 1 2 3 4 5
	{

		for (j = 1; j <= n - i; j++) // 
		{
			printf(" ");
		}

		for (j = 1; j <= (i * 2) - 1; j++)
		{
			printf("*");
		}
		
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		printf("\n");


	}
}