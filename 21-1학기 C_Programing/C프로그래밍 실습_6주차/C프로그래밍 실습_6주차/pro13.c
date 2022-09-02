#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N = 1, sum = 0, i = 0;

	while (N > 0)
	{
		scanf("%d", &N);

		if (0 < N && N <= 100)
		{
			sum += N;
			i++;
		}
	}

	printf("%d %.2f %d", sum, (float)sum / i, i);
}