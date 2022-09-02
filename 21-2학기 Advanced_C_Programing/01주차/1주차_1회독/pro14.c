#include <stdio.h>
#pragma warning(disable:4996)

int add_to_k(int* str, int* dst);

int main() {
	int* pd, d[100], N, S, E, sum = 0;

	scanf("%d", &N);

	for (pd = d; pd < d + N; pd++) {
		scanf("%d", pd);
	}

	for (int i = 0; i < N; i++) {
		sum += add_to_k(d, d + i);
	}

	printf("%d", sum);
}

int add_to_k(int* str, int* dst) {
	int* i, sum = 0;;

	for (i = str; i <= dst; i++) {
		sum += *i;
	}

	return sum;
}