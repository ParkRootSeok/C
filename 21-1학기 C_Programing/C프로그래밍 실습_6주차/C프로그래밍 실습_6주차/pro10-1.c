#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, i;
	int res, sum;

	scanf("%d", &n);
	sum = 0;

	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
		
	}
	printf("%d", sum);
}