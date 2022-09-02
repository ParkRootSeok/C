#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a, b, c, d, e, aver;

	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

	aver = (double)(a + b + c + d + e) / 5;

	printf("%.2f", aver);

}