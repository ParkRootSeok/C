#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i;
	int N, res;
	int x[10], y[10];

	scanf("%d", &N);
	
	getchar();
	for (i = 0; i < N; i++)
	{
		scanf("%c", &x[i]);
	}

	for (i = 0; i < N; i++)
	{
		scanf("%d", &y[i]);
	}
	
	for (i = 0; i < N; i++)
	{
			res = y[i] % N;
			printf("x[%d%%%d]=x[%d]=%c\n", y[i], N, res, x[res]);
	}
 	
}