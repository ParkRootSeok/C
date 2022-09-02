#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, n, tmp;
	int x[5];

	n = 0;
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &x[i]);
		n++;
	}
	
	for (i = 0; i < n - 1 ; i++)
	{
		if (x[i] > x[i+1]) // 0 1 _ 1 2 _ 2 3 _ 3 4 
		{
			tmp = x[i];
			x[i] = x[i + 1];
			x[i + 1] = tmp;
		}
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", x[i]);
	}
}