#include <stdio.h>
#pragma warning(disable:4996)

int main() 
{
	int i, sum;
	int x[10];

	sum = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &x[i]);
		sum += x[i];
	}
	
	printf("%d", sum);
	return 0;
}
