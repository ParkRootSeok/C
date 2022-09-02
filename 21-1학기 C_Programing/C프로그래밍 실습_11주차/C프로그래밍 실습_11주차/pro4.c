#include <stdio.h>
#pragma warning(disable:4996)

float divide(int, int);
float add3(float, float, float);

int main()
{
	int a, b, c, d, e, f;
	int res;

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	printf("%f", add3(divide(a, b), divide(c, d), divide(e, f)));
}

float divide(int x, int y)
{
	return (float)x / y;
}

float add3(float x, float y, float z)
{
	return x + y + z;
}
