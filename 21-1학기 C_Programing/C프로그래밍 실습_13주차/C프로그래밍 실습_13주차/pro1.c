#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int i, j, sum = 0;
	int x[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &x[i][j]);
		}
	}


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (i == j)  sum += x[i][j];
	
		}
	}

	printf("%d", sum);

}