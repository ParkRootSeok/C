#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, Ny, N, M, flag, flag2;
	char x[100], y[100], z[100];
	
	scanf("%d", &N);
	getchar();
	for (i = 0; i < N; i++)
	{
		scanf("%c", &x[i]);
	}
	

	Ny = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; x[i] != x[j]; j++);
		if (i == j)
		{
			y[Ny] = x[i];
			Ny++;
		}
	}

	scanf("%d", &M);
	getchar();
	for (i = 0; i < M; i++)
	{
		scanf("%c", &z[i]);
	}

	flag2 = 0;
	for (i = 0; i < Ny - M + 1; i++)
	{
		flag = 0;
		for (j = 0; j < M; j++)
		{
			if (y[i + j] != z[j]) flag = 1;
		}

		if (flag == 0)
		{
			printf("%d", i);
			flag2 = 1;
		}
	}
	if (flag2 == 0)
	{
		printf("none\n");
	}
}