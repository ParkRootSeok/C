#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int f, s, to;
	printf("첫 번째 정수: ");
	scanf("%d", &f);
	printf("두 번째 정수: ");
	scanf("%d", &s);

	to = f + s;
	printf("합: %d\n", to);

	return 0;
}