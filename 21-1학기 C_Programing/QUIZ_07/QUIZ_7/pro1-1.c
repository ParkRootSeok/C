#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N, res, sum, tmp;
	int max_n, max_s, min_n, min_s, flag;

	flag = 0;

	scanf("%d", &N);
	tmp = N;

	while (N > 0)
	{
		sum = 0;
		
		while (tmp > 0)
		{
			res = tmp % 10;
			tmp /= 10;
			sum += res;
		}

		if (flag == 0)
		{
			max_n = min_n = N;
			max_s = min_s = sum;
			flag = 1;
		}

		else if (max_s <= sum)
		{
			max_n = N;
			max_s = sum;
		}
		else if (min_s >= sum)
		{
			min_n = N;
			min_s = sum;
		}
		scanf("%d", &N);
		tmp = N;
	}

	printf("%d %d %d %d", max_n, max_s, min_n, min_s);

	return 0;
}