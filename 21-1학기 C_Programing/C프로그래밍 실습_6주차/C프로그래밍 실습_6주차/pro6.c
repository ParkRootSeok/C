#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, i, j, cnt;
	scanf("%d", &n);	

	for (i = 1; i <= n; i++)	
	{
		cnt = i;

		for (j = 1; j <= n;j++)
		{
			printf(" %d", cnt % 10);
			cnt++;
		}
		printf("\n");
	}

	return 0;

}