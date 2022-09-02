#include <stdio.h>
#pragma warning(disable:4996)

int sum(int);

int main()
{
	int A, B;

	scanf("%d %d", &A, &B);

	printf("%d", sum(B) - sum(A - 1));
}

int sum(int n)
{
	return n * (n + 1) / 2;
}