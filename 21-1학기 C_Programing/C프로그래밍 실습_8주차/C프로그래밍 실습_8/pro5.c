#include <stdio.h>
#pragma warning(disable:4996)

void print_triangle(int);

int main()
{
	int i, N, h;

	i = 0;
	scanf("%d", &N);
	while (N > 0)
	{
		print_triangle(N);
		scanf("%d", &N);
	}
}

void print_triangle(int x)
{
	int i, j;

	for (int i = 0; i < x; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*", x);
		}
		for (; j < x; j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	
}
