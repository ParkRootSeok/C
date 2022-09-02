#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, sum = 0, i = 0;

	scanf("%d", &n);

	for (i = 1;;i++)
	{	
		if (i > n)	break;

		sum += i;
	}
	printf("%d", sum);
	return 0;

}