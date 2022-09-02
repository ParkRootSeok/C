#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, num, N, tmp, flag;
	int max, res, sum, cnt;
	int x[10], y[10];

	scanf("%d", &num);
	for (i = 0; num > 0; i++)
	{
		x[i] = num % 10; 
		num /= 10;
	}
	N = i; // x¿« ≈©±‚


	for (i = 0; i < N; i++)
	{
		y[i] = x[N - 1 - i];
	}

	flag = 0;
	for (i = 0; i < N; i++)
	{
		if (x[i] != y[i]) flag = 1;
	}


	if (flag != 0)
	{
		sum = 0;

		for (i = 0; i < N; i++)
		{
			sum += x[i];
		}
		printf("%d", sum);
	}

	else
	{
		max = x[0];
		for (i = 1; i < N; i++)
		{
			if (max < x[i]) max = x[i];
		}
		printf("%d", max);
	}
	
}