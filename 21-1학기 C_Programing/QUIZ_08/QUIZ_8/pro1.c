#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j;
	int N, N_a, N_A, min_idx, max_idx;
	char x[100], y[100], min, max;

	i = 0;
	scanf("%c", &x[i]);
	while (x[i] != '*')
	{
		i++;
		scanf("%c", &x[i]);
	}

	N = i;

	j = 0;
	for (i = 0; i < N; i++)
	{
		if ('A' <= x[i] && x[i] <= 'Z') {
			y[j] = x[i];
			j++;
		}
	}
	N_A = j; // ´ë¹®ÀÚ °¹¼ö

	j = 0;
	for (i = 0; i < N; i++)
	{
		if ('a' <= x[i] && x[i] <= 'z') {
			y[N - 1 - j] = x[i];
			j++;
		}
	}
	N_a = j; // ¼Ò¹®ÀÚ °¹¼ö
	printf("%d %d %d\n", N, N_A, N_a);

	for (i = 0; i < N; i++)
	{
		printf("%c", y[i]);
	}
	printf("\n");

	min = y[0];
	min_idx = 0;
	for (i = 1; i < N_A; i++)
	{
		if (y[i] < min) {
			min = y[i];
			min_idx = i;
		}
	}

	max = y[N_A];
	max_idx = N_A;
	for (i = N_A + 1; i < N; i++)
	{
		if (y[i] > max) {
			max = y[i];
			max_idx = i;
		}
	}
	
	printf("%c %d %c %d\n", min, min_idx, max, max_idx);
}