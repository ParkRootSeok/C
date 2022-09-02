#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, rank;
	int N, ko, en, ma;
	double tmp, avg[100];

	scanf("%d", &N);

	for (size_t i = 0; i < N; i++)
	{
		scanf("%d %d %d", &ko, &en, &ma);
		avg[i] = (ko + en + ma) / 3.0;
	}

	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - 1 - i; j++)
		{
			if (avg[j] < avg[j + 1])
			{
				tmp = avg[j];
				avg[j] = avg[j + 1];
				avg[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < N; i++)
	{
		rank = 0;
		for (j = 0; j < i; j++)
		{
			if (avg[i] < avg[j]) rank++;
		}

		printf("%d %.2f", rank + 1, avg[i]);
	}
}