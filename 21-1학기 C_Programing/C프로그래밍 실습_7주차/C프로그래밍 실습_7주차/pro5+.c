#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, max;
	int x[10];
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &x[i]);
	}

	max = x[0];
	for (i = 0; i < 10; i++)
	{
		if (max < x[i])
			max = x[i];
	}
	printf("%d", max);
	return 0;
}