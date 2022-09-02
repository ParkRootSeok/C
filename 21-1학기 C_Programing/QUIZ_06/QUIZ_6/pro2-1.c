#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, n_1;	
	int res, sum = 0;
	int flag = 0;
	int max_s, max_n, min_s, min_n;

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

		if (flag == 0) // 기준
		{
			max_s = min_s = sum;
			max_n = min_n = n;
			flag = 1;
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

	printf("%d %d %d %d", max_n, max_s, min_n, min_s);

}