#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N, tmp, res, sum;
	int flag_1 = 0, flag_2 = 0, flag_3 = 0;
	int max_10, max_20, max_n, max_s, min_n, min_s;

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

		if (flag_1 == 0 && 10 < sum)
		{
			max_10 = N;
			flag_1 = 1;
		}

		if (flag_2 == 0 && 20 <= sum && sum <= 30)
		{
			max_20 = N;
			flag_2 = 1;
		}

		if (flag_3 == 0)
		{
			max_n = min_n = N;
			max_s = min_s = sum;
			flag_3 = 1;
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

	if (flag_1 == 1) printf("%d\n", max_10);
	else printf("none\n");
	if (flag_2 == 1) printf("%d\n", max_20);
	else printf("none\n");
	printf("%d %d %d %d", max_n, max_s, min_n, min_s);
}