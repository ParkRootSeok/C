#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a,b,c,d, p, m;

	printf("");
	scanf("%d%d", &a, &b);

	p = a + b;

	printf("%d%d%d%d%d\n", p, p, p, p, p);
	printf("%d   %d\n", p, p);
	printf("%d   %d\n", p, p);
	printf("%d%d%d%d%d\n", p, p, p, p, p);

	printf("");
	scanf("%d%d", &c, &d);

	m = c - d;

	printf("%d%d%d%d%d\n", m, m, m, m, m);
	printf("%d   %d\n", m, m);
	printf("%d   %d\n", m, m);
	printf("%d%d%d%d%d\n", m, m, m, m, m);

	return 0;
}