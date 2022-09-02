#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N, M, sum;
	int i, j, k;

	scanf("%d %d", &N, &M);

	for (i = 1; i <= 100; i++) // n_1
	{
		for (j = 1; j <= 100; j++) // n_2
		{
			for (k = 1; k <= 100; k++) // n_3
			{
				sum = i + j + k;

				if (i != j && (i + j) * 3 == k && N <= sum && sum <= M)
					printf("%d %d %d\n", i, j, k);
			}
		}
	}
	return 0;
}