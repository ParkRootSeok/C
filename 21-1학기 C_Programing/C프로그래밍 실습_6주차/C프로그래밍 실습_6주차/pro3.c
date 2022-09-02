#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, g, flag = 0;

	scanf("%d", &n);

	do
	{
		flag++;
		scanf("%d", &g);

		if (n > g)
		{
			printf("%d<?\n", g);
		}
		else if (n < g)  printf("%d>?\n", g);
		else printf("%d==?\n", g);


	} while (n != g);

	printf("%d", flag);
}