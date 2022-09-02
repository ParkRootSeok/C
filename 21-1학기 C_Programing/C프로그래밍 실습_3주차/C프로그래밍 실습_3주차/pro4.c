#include <stdio.h>
#pragma warning(disable:4996)

int main()

{
	double a;

	printf("실수 입력: ");
	scanf("%lf", &a);

	printf("반올림 정수 출력: %.0f", a); 
	// 정석 X(정수출력 X 정수처럼 보이게 하는것)
	
	printf("반올림 정수 출력: %d", (int)(a + 0.5));
	// 정석 
}

//위 두가지 방법 모두 숙지하자. 응용할 수 있음.