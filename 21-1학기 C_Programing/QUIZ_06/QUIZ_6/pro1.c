#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, i, j, k = 0;
	int a, sum = 0;

	scanf("%d", &n);

	for (i = 2; i <=  n; i++)
	{
		j = 2;

		while (n % j != 0 && j < n)
		{
			j++;
		}

		if (j == n) // 소수
		{
			while (n > 0)
			{
				a = n % 10;
				n /= 10;

				sum += a;
			}
		}
		else // 소수 X
		{
			while (k <= n)
			{
				k++;
				if (n % k == 0)
				{
					sum += k;
				}

			}
		}

	}

	printf("%d", sum);

}