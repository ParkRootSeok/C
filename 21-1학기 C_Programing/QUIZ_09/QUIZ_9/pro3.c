#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j;
	int N, tmp, rank; 
	int ko, en, ma;
	double avg[100];

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d %d %d", &ko, &en, &ma);
		avg[i] = (ko + en + ma) / 3.0;
	}

	for (i = 0; i < N; i++)
	{
		rank = 0;
		for (j = 0; j < N; j++)
		{
			if (avg[i] < avg[j])
				rank++;
		}
		printf("%d %.2f\n", rank + 1, avg[i]);
	}
}