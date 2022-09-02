#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, k;
	int x[10], cnt[10] = {0};

	for (i = 0; i < 10; i++) // 13 2 2 5 6 3 3 3 3 5
 	{
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] == x[j]) cnt[i]++;
		}

		for (k = 0; k < i && x[k] != x[i]; k++);
		if (k == i) printf("%d %d\n", x[i], cnt[i]);
	}

	return 0;

}