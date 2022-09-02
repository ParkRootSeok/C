#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, Nx, flag;
	int N, max, sum;
	int x[10], y[10];
	
	scanf("%d", &N);

	for (i = 0;N > 0; i++)
	{
		x[i] = N % 10;
		N /= 10;
	}
	Nx = i;

	for (i = 0; i < Nx; i++)
	{
		y[Nx - 1 - i] = x[i];
	}

	flag = 0;
	for (i = 0; i < Nx / 2; i++)
	{
		if (y[i] != y[Nx - 1 - i]) flag = 1;
	}

	
	if (flag == 0)
	{
		max = x[0];
		for (i = 1; i < Nx; i++)
		{
			if (x[i] > max) max = x[i];
		}

		printf("%d", max);
	}
	else
	{
		sum = 0;
		for (i = 0; i < Nx; i++)
		{
			sum += x[i];
		}

		printf("%d", sum);
	}
	
}