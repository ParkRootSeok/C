#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i = 1, n;

	scanf("%d", &n);

	while (n >= i)
	{
		if (n % i == 0)
			printf("%d ", i); 

		i++;
	}
}