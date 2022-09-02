#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, i, sum;
	
	scanf("%d", &n);
	sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d", sum);
}