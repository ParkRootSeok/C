#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int a,b,c,d,e,f;
	scanf("%d", &a);

	b = a / 10000; // b = 1
	a %= 10000; // a = 2345
	c = a / 1000; // c = 2
	a %= 1000; // a= 345
	d = a / 100; // d = 3
	a %= 100; // a = 45
	e = a / 10; // e = 4
	a %= 10; // a = 5
	f = a;

	// 위는 만의자리부터 처리.(일의자리부터 처리도 가능) 두 방법 다 숙지

	printf("%dTTHO %dTHO %dHUN %dTEN %d", b, c, d, e, f);

	return 0;
}