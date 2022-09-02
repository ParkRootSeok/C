#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, P, i;
	int res, cnt = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		P = i;

		while (P > 0)
		{
			if (P % 10 == 3)
			{
				cnt++;
			}
			P /= 10;
		}
	}
	printf("%d", cnt);
	return 0;
}
