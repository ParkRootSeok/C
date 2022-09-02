#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n1, n2, n3, n4, n5, to=0;
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

	if (n1 > 0)
		to += n1;
	if (n2 > 0)
		to += n2;
	if (n3 > 0)
		to += n3;
	if (n4 > 0)
		to += n4;
	if (n5 > 0)
		to += n5;

	printf("%d", to);
	return 0;
}