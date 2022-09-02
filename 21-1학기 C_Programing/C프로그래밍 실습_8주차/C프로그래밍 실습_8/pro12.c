#include <stdio.h>
#pragma warning(disable:4996)

void print_line(int, int, int);

int main()
{
	int i, n;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		print_line(n - i - 1, (i + 1) * 2 - 1 , n - i - 1);
	}
}

void print_line(int x, int y, int z)
{
	int i;

	for (i = 0; i < x; i++)
	{
		printf(" ");
	}

	for (i = 0; i < y; i++)
	{
		printf("*");
	}

	for (i = 0; i < z; i++)
	{
		printf(" ");
	}
	printf("\n");
}