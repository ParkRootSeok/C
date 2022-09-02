#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char a;

	printf("소문자 입력: ");
	scanf("%c", &a);

	printf("대문자 출력: %c\n", a - ('a' - 'A'));

	return 0;
}