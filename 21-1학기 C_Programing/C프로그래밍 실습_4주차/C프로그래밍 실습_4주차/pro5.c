#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	double n, s, r;
	scanf("%lf", &n);

	r = n / (2 * 3.14);
	s = 3.14 * (r * r);

	printf("%.0f", s);

	return 0;
}