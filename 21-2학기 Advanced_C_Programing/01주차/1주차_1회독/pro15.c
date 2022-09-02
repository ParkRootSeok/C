#include <stdio.h>
#pragma warning(disable:4996)

void ABC(int* arr, int k);

int main() {

	int arr[10], k;
	int* parr, * i;

	for (parr = arr; parr < arr + 10; parr++) {
		scanf("%d", parr);
	}
	parr = arr;

	for (i = parr, k = 10; i < arr + 10; i++, k--) {
		ABC(i, k);
	}

	for (i = parr; i < arr + 10; i++) {
		printf(" %d", *i);
	}

}

void ABC(int* arr, int k) {

	int i, * tmp;

	for (i = 0; i < k; i++) {

		if (*arr < *(arr + i)) {
			tmp = *arr;
			*arr = *(arr + i);
			*(arr + i) = tmp;
		}
	}

}
