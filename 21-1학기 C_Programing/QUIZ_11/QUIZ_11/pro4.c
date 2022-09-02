#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, x[10], flag = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &x[i]);
	}

	for (i = 0; i < 10; i++)
	{
		flag = 0;
		for (j = i + 1; j < 10; j++) {
			if (x[i] == x[j]) flag = 1;
		}

		if (flag == 0)
		{
			printf("%d", x[i]);
		}
	}
}