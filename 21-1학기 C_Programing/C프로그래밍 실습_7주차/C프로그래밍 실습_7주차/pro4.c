#include <stdio.h>
#pragma warning(disable:4996)

int main() 
{
	int i, j, n, cnt[3] = { 0 };

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		cnt[n - 1]++;
	}

	for (i = 0; i < 3; i++)
	{
		printf("%d:", i + 1);
		for (j = 0; j < cnt[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
	
}