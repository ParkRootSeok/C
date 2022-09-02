#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i;
	int sum, avg;
	int x[5];

	sum = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &x[i]);
		sum += x[i];
	}
	avg = sum / 5;

	for (i = 0; i < 5; i++)
	{
		if (avg < x[i])
			printf("%d\n", x[i]);
	}
	return 0;
}