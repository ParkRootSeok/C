#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	char a;

	printf("소문자 입력: ");
	scanf("%c", &a);

	printf("%c는 %d번째 영어 소문자", a, a - 'a');

	return 0;
}