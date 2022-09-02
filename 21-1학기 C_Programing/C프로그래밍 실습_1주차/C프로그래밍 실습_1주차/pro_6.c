#pragma warning(disable:4996) // scanf 사용 오류 방지
#include <stdio.h>

int main()

{
	int m;
	int d;

	printf("생일 입력\n");
	printf("입력 월 일: "); // 출력
	scanf("%d%d", &m, &d); // 입력(변수 앞에 반드시 &붙이자)
	printf("생일은 %d월 %d일 입니다.\n", m, d);

	return 0;
}

// %d : 입력되는 값을 정수로 해석