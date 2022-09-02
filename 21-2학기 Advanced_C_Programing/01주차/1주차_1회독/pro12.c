#include <stdio.h>
#pragma warning(disable:4996)

void addArray(int *pa, int *pb, int *pc, int N);

int main() {
	int N, a[20], b[20], c[20], *p;
	scanf("%d", &N);

	for (p = a; p < a + N; p++) {
		scanf("%d", p);
	}

	for (p = b; p < b + N; p++) {
		scanf("%d", p);
	}

	addArray(a, b, c, N);
	
	for (p = c; p < c + N; p++) {
		printf(" %d", *p);
	}

}


void addArray(int* pa, int* pb, int* pc, int N) {
	int i, j;

	for (i = 0; i < N; i++) {
		*(pc + i) = *(pa + i) + *(pb + N - i -1);
	}
}