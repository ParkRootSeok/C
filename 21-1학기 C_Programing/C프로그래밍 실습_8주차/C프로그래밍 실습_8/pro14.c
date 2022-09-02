#include <stdio.h>
#pragma warning(disable:4996)

int is_prime(int);
int next_prime(int);

int main()
{
	int i, N, M, cnt ;
	scanf("%d %d", &N, &M);


	while (M > 0)
	{
		printf(" %d", next_prime(N));
		N = next_prime(N);
		M--;
	}
}

int is_prime(int N)
{
	int i, j;

	for (i = 2; i < N; i++)
	{
		for (j = 2; j < i && i % j != 0; j++);
		
		if (i == j) return 1;
		else return 0;
	}
}

int next_prime(int N)
{
	int i, j, cnt, tmp, flag = 0;

	if (is_prime(N) && flag == 0)
	{
		for (i = N + 1;;i++)
		{
			for (j = 2; i % j != 0; j++);
			if (i == j) return i;
		}
	}
}
