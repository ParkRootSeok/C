#pragma warning(disable:4996) 
#include <stdio.h>

int main()
{
	char a;
	printf("문자형 입력(%%c) : ");
	scanf("%c", &a);

	printf("문자로 출력(\%%c): %c\n", a);
	printf("정수로 출력(\%%d): %d\n", a - '0');

	return 0;

}