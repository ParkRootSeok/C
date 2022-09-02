#include <stdio.h>
#pragma warning(disable:4996)

int arrsum(int* str, int* dst);

int arrsum(int* str, int* dst) {

	int* i, sum = 0;

	for (i = str; i <= dst; i++) {
		sum += *i;
	}

	return sum;
}

int main() {
	int N, S, E, arr[100], * parr;

	scanf("%d %d %d", &N, &S, &E);

	for (parr = arr; parr < arr + N; parr++) {
		scanf("%d", parr);
	}

	printf("%d", arrsum(arr + S, arr + E));
}