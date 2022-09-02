#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, N, flag;
	int x[10];

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &x[i]);
	}
	N = i;
	/*
	for (i = 0; i < 10; i++)
	{
		flag = 0;
		for (j = 0; j < i; j++)
		{
			if (x[i] != x[j]) flag = 1;
		}
		
		for (j = 0;x[j] != x[i]; j++);
	
		
		
		if (flag = 1) printf(" %d", x[i]);
		if (i == j) printf(" %d", x[i]);	
	}
	*/ 

	for (i = 0; i < N; i++)
	{
		flag = 0;
		for (j = i + 1; j < N; j++)
		{
			if (x[i] == x[j])
			{
				flag = 1;
			}
		}

		if (flag == 0) printf(" %d", x[i]);
	}
	return 0;
}