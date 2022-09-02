#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	double ma, ko, sci = 82.25, to;

	printf("");
	scanf("%lf%lf", &ma, &ko);

	printf("math : %.2f\n", ma);
	printf("korean : %.2f\n", ko);
	printf("science : %.2f\n", sci);

	to = ma + ko + sci;

	printf("total : %.2f", to);

	return 0;
}