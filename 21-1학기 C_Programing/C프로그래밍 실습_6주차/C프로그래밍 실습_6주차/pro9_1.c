#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n, P, i;
	int res, cnt=0;

	scanf("%d", &n);

		while (n > 0)
		{
			if (n % 10 == 3)
			{
				cnt++;
			}
			n /= 10;
		}
	printf("%d", cnt);
	return 0;

}

