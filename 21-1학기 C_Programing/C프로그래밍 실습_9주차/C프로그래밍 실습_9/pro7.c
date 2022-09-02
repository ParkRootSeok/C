#include <stdio.h>
#pragma warning(disable:4996)

int f1(int a);

int f2(int b);

int f3(int c);

int a = 1;

int b = 1;

int main(void) {

	int i, b = 0;

	for (i = 0; i < 2; i++) {

		b = b + f1(a);

		printf("%d, %d\n", a, b);

	}

	return 0;

}

int f1(int a) {

	static b = 2;

	a++;

	b--;

	printf("%d, %d\n", a, b);

	a = f2(a + b);

	return a;

}

int f2(int a) {

	if (b > 0)

		b = b - a;

	printf("%d, %d\n", a, b);

	return b;

}