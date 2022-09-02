#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, tmp, cnt;
	int x[5];

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &x[i]);
	}

	cnt = 4;
	while (cnt != 0)

	{
		for (i = 0; i < 4; i++)
		{
			if (x[i] > x[i + 1])
			{
				tmp = x[i + 1];
				x[i + 1] = x[i];
				x[i] = tmp;
			}
		}
		cnt--;
	}
	

	for (i = 0; i < 5; i++)
	{
		printf("%d\n", x[i]);
	}
	
}