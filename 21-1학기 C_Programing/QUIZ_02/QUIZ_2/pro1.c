#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char a,b,c,d,e,to;

	scanf("%c%c%c%c%c", &a, &b, &c, &d, &e);

	to = c - '0' + d - '0' + e - '0';

	printf("%c %c %d", a + ('a' - 'A'), b - ('a' - 'A'), to);

	return 0;

}