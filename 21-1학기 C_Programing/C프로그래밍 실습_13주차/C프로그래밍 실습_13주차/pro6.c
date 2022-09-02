#include <stdio.h>
#pragma warning(disable:4996)
void prt(int x[][5], int N);


int main()
{
	int i, j;
	int N, x[20][5];

	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < 5; j++)
		{
			scanf("%d", &x[i][j]);
		}
	}

	prt(x, N);
}

void prt(int x[][5], int N) {
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", x[N - i - 1][j]);
		}
		printf("\n");
	}

}