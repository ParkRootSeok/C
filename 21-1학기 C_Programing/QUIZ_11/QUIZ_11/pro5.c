#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, N;
	int x[20], max[20], min[20];

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &x[i]);
	}

	for (i = 0; i < N; i += 3)
	{
		max[i / 3] = x[i];
		min[i / 3] = x[i];

		for (j = i + 1;j <= i + 2 && j < N; j++)
		{
			if (max[i / 3] < x[j]) max[i / 3] = x[j];
			else if (min[i / 3] > x[j]) min[i / 3] = x[j];
		}
	}

	N = (N + 2) / 3;

	for (i = 0; i < N; i++)
	{
		printf(" %d", max[i]);
	}
	printf("\n");
	for (i = 0; i < N; i++)
	{
		printf(" %d", min[i]);
	}
}