#include <stdio.h>
#pragma warning(disable:4996)

void swap(int* p1, int* p2);


int main() {

	int a, b, N, ar[50], *p;

	scanf("%d", &N);

	for (p = ar; p < ar + N; p++) {
		scanf("%d", p);
	}

	scanf("%d %d", &a, &b);
	swap(ar + a, ar + b);

	for (p = ar; p < ar + N; p++) {
		printf("%d ", *p);
	}

}

void swap(int* p1, int* p2) {

	int * tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	*p2 = tmp;

}