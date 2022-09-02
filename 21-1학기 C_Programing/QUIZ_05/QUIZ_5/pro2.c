#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n = 0;
	int res1 = 0, res2 = 0, res3, res4;
	
	for (;n >= 0;)
	{
		scanf("%d", &n);

		while (res1 < 100)
		{
			res1 = n > 100 && n > res1 ? n : res1;
		}
		while (res2 < 200 && res2 > 300)
		{
			res2 = (200 <= n && n <= 300) && res2 > n ? n : res2;
		}
	}
	
	printf("%d\n", res1);
	printf("%d\n", res2);
}