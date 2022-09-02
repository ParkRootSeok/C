#include <stdio.h>
#pragma warning(disable:4996)

int count_3(int);

int main()
{
	int i, N, sum = 0;
	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		sum += count_3(i);
	}

	printf("%d", sum);
}

int count_3(int x)
{
	int res, cnt;

	cnt = 0;

	while (x > 0)
	{
		res = x % 10;
		if (res == 3) cnt++;
		x /= 10;
	}

	return cnt;
}