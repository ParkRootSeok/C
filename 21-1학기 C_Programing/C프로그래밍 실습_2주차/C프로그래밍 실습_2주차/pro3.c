#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a;

	printf("입력: ");
	scanf("%d", &a);

	char b = a;

	printf("출력(int) - >%d\n", a);
	printf("출력(char) - >%d\n", b);

	return 0;
}