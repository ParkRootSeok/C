#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i;
	double x[10];

	for (i = 0; i < 10; i++)
	{
		scanf("%lf", &x[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (x[i] > 0.0)
		{
			printf(" %.1f", x[i]);
		}
	}
	return 0;
}