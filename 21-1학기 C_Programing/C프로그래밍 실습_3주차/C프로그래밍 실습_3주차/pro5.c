#include <stdio.h>
#pragma warning(disable:4996)

int main()

{
	int y,m,d;

	scanf("%d/%d/%d", &y, &m, &d);
	printf("%d³â %02d¿ù %dÀÏ", y,m,d);

	return 0;
}