#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, i, j, k;
	int sum;

	scanf("%d", &n);

	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= 6; j++) {
			for (k = 1; k <= 6; k++) {
				sum = i + j + k;

				if (sum == n) printf("%d %d %d\n", i, j, k);
			}
		}
	}
}