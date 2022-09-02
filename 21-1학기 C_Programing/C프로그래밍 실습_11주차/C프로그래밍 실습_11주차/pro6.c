#include <stdio.h>
#pragma warning(disable:4996)

void print_prime(int, int);
int is_prime(int);

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);

	print_prime(N, M);
}

int is_prime(int N)
{
	int i;

	for (i = 2; i < N && N % i != 0; i++);
	
	return (i == N); 
}
void print_prime(int N, int M)
{
	int j, cnt = 0;

	for (j = 2; j <= N; j++)
	{
		if (is_prime(j))
		{
			printf(" %d", j);
			cnt++;

			if (cnt % M == 0) printf("\n");
		}
	}
}
