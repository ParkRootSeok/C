#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N, M, res;

	scanf("%d %d", &N, &M);

	res = M * M == N || N * N == M;

	if (res == 1)
	{
		if (N < M)
		{
			printf("%d*%d=%d", N, N, M);
		}
		else
		{
			printf("%d*%d=%d", M, M, N);
		}
	}
	else printf("none");

	return 0;
}
