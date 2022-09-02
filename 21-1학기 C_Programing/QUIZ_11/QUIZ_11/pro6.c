#include <stdio.h>
#pragma warning(disable:4996)
int is_prime(int);
int next_prime(int);


int main()
{
	int i, N, M;

	scanf("%d %d", &N, &M);

	for (i = 0; i < M; i++)
	{
		printf(" %d", next_prime(N));
		N = next_prime(N);
	}
}


int is_prime(int x) 
{
	int i, j;

	for (i = 2; i < x; i++)
	{
		for (j = 2; j < i && i % j != 0; j++);
		
		if (i == j) return 1;
		else return 0;
	}
}

int next_prime(int x)	
{
	int i, j;

	if (is_prime(x))
	{
		for (i = x + 1;; i++)
		{
			for (j = 2; i % j != 0; j++);
			if (i == j) return i;
		}
	}
}

