#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;

	printf("Enter an integer: ");
	scanf("%d", &a);

	printf("%d%d%d%d%d%d\n", a, a, a, a, a, a);
	printf("%d    %d\n", a, a);
	printf("%d    %d\n", a, a);
	printf("%d%d%d%d%d%d\n", a, a, a, a, a, a);

	return 0;

}