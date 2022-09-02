#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int scr[3][2];
	int i, j, sum;

	for (i = 0; i < 3; i++)
	{
		scanf("%d %d", &scr[i][0], &scr[i][1]);
	}

	for (i = 0; i < 3; i++)
	{
		sum = 0;
		for (j = 0; j < 2; j++)
		{
			sum += scr[i][j];
		}
		printf("%d\n", sum);
	}

}