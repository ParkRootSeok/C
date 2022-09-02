#include <stdio.h>
#pragma warning(disable:4996)
int arrsum(int x[], int S, int E);

int main() {
	int N, S, E, i;
	int x[100];
	scanf("%d %d %d", &N, &S, &E);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &x[i]);
	}

	printf("%d", arrsum(x, S, E));
}


int arrsum(int x[], int S, int E) {
	int sum = 0;

	for (int i = S; i <= E; i++)
	{
		sum += x[i];
	}

	return sum;
}