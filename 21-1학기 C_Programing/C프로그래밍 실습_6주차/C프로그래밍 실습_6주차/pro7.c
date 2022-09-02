#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int n, i, j, cnt;

	scanf("%d", &n);
	cnt = 1;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf(" %d", cnt % 10);
			cnt++;
		}
		printf("\n");
	}
	return 0;
}