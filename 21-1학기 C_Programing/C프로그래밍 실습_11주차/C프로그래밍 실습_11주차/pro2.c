#include <stdio.h>
#pragma warning(disable:4996)

int func_max(int a, int b, int c, int d)
{
	int max_ab, max_cd, max;
	max_ab = a > b ? a : b;
	max_cd = c > d ? c : d;

	max = max_ab > max_cd ? max_ab : max_cd;

	return max;
}

int main()
{
	int max;
	int	a, b, c, d;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	max = func_max(a, b, c, d);

	printf("%d", max);
}