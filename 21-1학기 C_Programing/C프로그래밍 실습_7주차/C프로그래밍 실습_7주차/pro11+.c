#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i;
	double x[10], min;

	for (i = 0; i < 10; i++)
	{
		scanf("%lf", &x[i]);
	}

	min = x[0];
	for (i = 0; i < 10; i++)
	{
		if (x[i] < min)
		{
			min = x[i];
		}
	}
	printf("%.1f", min);
	return 0;
}