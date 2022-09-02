#include <stdio.h>
#pragma warning(disable:4996)

int add_digits(int);
int update_max(int, int);

int main()
{
	int i, N, M, sum;
	int max, max_num, flag = 0;
	
	scanf("%d", &N);
	max = add_digits(N);
	max_num = N;

	while (N > 0)
	{
		M = add_digits(N);
		max = update_max(max, M);
		if (max == M)	max_num = N;
		
		scanf("%d", &N);
	}
	printf("%d %d", max_num, max);
}

int add_digits(int N)
{
	int sum = 0;

	while (N > 0)
	{
		sum += N % 10;
		N /= 10;
	}

	return sum;
}

int update_max(int max, int N)
{
	if (max > N) return max;
	else return N;
}