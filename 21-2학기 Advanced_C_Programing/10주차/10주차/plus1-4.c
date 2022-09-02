#include <stdio.h>
#pragma warning(disable:4996)

int* center(int* p, int N);

int main() {
	int *p, N, arr[100], *cen, idx = 0;
	scanf("%d", &N);
	
	for (p = arr; p < arr + N ; p++) scanf("%d", p);
	
	cen = center(arr, N);

	printf("%d\n", *cen);
	for (p = arr; p < arr + N; p++, idx++) {
		if (*cen == *p) printf("%d\n", idx);
 	}

}

int* center(int* p, int N) {
	int* q, *cen = NULL, flag = 0;
	double min, avg = 0;

	for (q = p; q < p + N; q++) {
		avg += *q;
	}
	avg /= (double)N;

	printf("%.1f\n", avg);

	for (q = p; q < p + N; q++) {

		double len = (avg - *q) * (avg - *q);

		if (flag == 0) {
			min = len;
			cen = q;
			flag = 1;
		}

		else if (min > len) {
			min = len;
			cen = q;
		}
	}

	return cen;
}