#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, tmp, flag;
	int min, max_f, max_s;
	int x[5];

	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &x[i]);	
	}

	min = x[0];
	for (i = 0; i < 5; i++)
	{
		min = min > x[i] ? x[i] : min;
	}
	

	max_f = max_s = min;
	for (i = 0; i < 5; i++)
	{
		if (max_f < x[i])
		{
			max_f = x[i];
			tmp = i;
		}
	}

	for (i = 0; i < 5; i++)
	{
		if (max_s < x[i] && i != tmp)
		{
			max_s = x[i];
		}
	}
	printf("%d\n%d", max_f, max_s);
}