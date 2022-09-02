#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, sum, cnt;
	double ave;

	sum = cnt = 0;

	while (1)
	{
		scanf("%d", &n);
		if (n <= 0) break;
		else if (n > 100) continue;

		sum += n;
		cnt++;

	}

	ave = (double)sum/cnt;
	printf("%d %.2f %d", sum, ave, cnt);
	return 0;

}