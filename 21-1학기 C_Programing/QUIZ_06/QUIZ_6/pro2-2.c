#include <stdio.h>
#pragma warning(disable:4996)

#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, n_1;
	int res, sum = 0;
	int flag_1 = 0, flag_2 = 0, flag_3 = 0;
	int max_s, max_n, min_s, min_n, max_10, max_20;

	n = 1;

	while (n > 0)
	{
		scanf("%d", &n);

		if (n < 0)
		{
			break;
		}

		n_1 = n;

		while (n_1 > 0) // 각 자릿수 합(반복)
		{
			res = n_1 % 10;
			n_1 /= 10;
			sum += res;
		}

		if (flag_1 == 0) // 기준
		{
			max_s = min_s = sum;
			max_n = min_n = n;
			flag_1 = 1;
		}

		if (flag_2 == 0 && 10 < sum)
		{
			max_10 = n;
			flag_2 = 1;
		}

		if (flag_3 == 0 && 20 <= sum && sum <= 30)
		{
			max_20 = n;
			flag_3 = 1;
		}

		if (max_s < sum)
		{
			max_s = sum;
			max_n = n;
		}

		if (min_s > sum)
		{
			min_s = sum;
			min_n = n;
		}

		sum = 0;
	}

	if (flag_2 == 1) printf("%d\n", max_10);
	else printf("none");

	if (flag_3 == 1) printf("%d\n", max_20);
	else printf("none");

	printf("%d %d %d %d", max_n, max_s, min_n, min_s);

	return 0;
}