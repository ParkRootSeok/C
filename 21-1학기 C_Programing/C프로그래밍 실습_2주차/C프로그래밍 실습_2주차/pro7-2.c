#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a;

	printf("정수 입력: ");
	scanf("%d", &a);

	printf("%d번째 영어 대문자는 %c\n", a, a+'A');

	return 0;
}