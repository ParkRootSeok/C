#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int* p, *q;
	int a[10], b[10], alen = 0, blen = 0;

	for (p = a; ;p++) {
		scanf("%d", p);
		if (*p == 0) break;
		alen++;
	}
	
	for (p = b; ; p++) {
		scanf("%d", p);
		if (*p == 0) break;
		blen++;
	}

	for (p = a; p < a + alen  - 2; p++) {

		for (q = a; q < a + alen - 1; q++) {

			if (*q < *(q + 1)) {
				int tmp = *q;
				*(q) = *(q + 1);
				*(q + 1) = tmp;
			}
		}
	}

	for (p = b; p < b + blen - 2; p++) {

		for (q = b; q < b + blen - 1; q++) {

			if (*q > *(q + 1)) {
				int tmp = *q;
				*(q) = *(q + 1);
				*(q + 1) = tmp;
			}
		}
	}

	for (p = a; p < a + alen; p++) {
		for (q = b; q < b + blen; q++) {
		
			if (*p < *q) {
				int tmp = *p;
				*p = *q;
				*q = tmp;
			}
		}
	}

	for (p = a; p  < a + alen; p++) {
		printf("%d ", *p);
	}
	printf("\n");
	for (p = b; p < b + blen; p++) {
		printf("%d ", *p);
	}
}