#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, m, i;
	int res, res1, res2;
	int max, min;

	scanf("%d %d", &n, &m);

	max = n > m ? n : m;
	min = n > m ? m : n;

	for (i = min; min  >= 1; i-- )
	{
		if (max % i == 0 && min % i == 0)
		{
			break;
		}

	}

	printf("%d", i);
	return 0;
}