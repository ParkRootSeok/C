#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char a;
	int na;

	scanf("%c", &a);

	na = (('a') <= a && a <= ('z')) || (('A') <= a && a <= ('Z'));

	printf("%d\n", na);

	return 0;
}