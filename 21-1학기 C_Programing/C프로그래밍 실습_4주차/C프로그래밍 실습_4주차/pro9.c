#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);

	if (N > M)
		printf("%d\n", N);
	else
		printf("%d\n", M);
}