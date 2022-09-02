#include <stdio.h>
#pragma warning(disable:4996)

void print_row1(int);
void print_row2(int);

int main()
{
	int i, N;

	scanf("%d", &N);

	print_row1(N);
	for (i = 0; i < N - 2; i++)
	{
		print_row2(N);
	}
	print_row1(N);
}

void print_row1(int x)
{
	for (int i = 0; i < x ;i++)
	{
		printf("%d", x);
	}
	printf("\n");
}

void print_row2(int x)
{
	for (int i = 0; i < x; i++)
	{
		if (i == 0 || i == x - 1)
		{
			printf("%d", x);
		}
		else printf(" ");
	}
	printf("\n");
}