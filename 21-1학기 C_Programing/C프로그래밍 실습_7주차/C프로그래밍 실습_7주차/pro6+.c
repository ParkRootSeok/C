#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i,j;
	int x[10], cnt[10] = { 0 };
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] < x[j]) cnt[i]++;
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf(" %d", cnt[i]);
	}
}