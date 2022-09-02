#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int n, sum;
	int res;
	scanf("%d", &n);

	while (n >= 10)
	{
		sum = 0;

		while (n > 0) // 각 자릿수의 합
		{
			sum += n % 10;
			n /= 10;
		}

		n = sum;

	}

	printf("%d", sum);

}