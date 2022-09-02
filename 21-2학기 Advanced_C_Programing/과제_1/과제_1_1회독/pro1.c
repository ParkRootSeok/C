#include <stdio.h>
#pragma warning(disable:4996)

int* MAX(int ar[]);
int* MIN(int ar[]);

int main() {
	int *str, *dst, *par1, *par2;
	int ar[100], num, N, i;
	scanf("%d", &N);

	for (i = 0; i < N; i++) {

		for (par1 = ar; ; par1++) {
			scanf("%d", &num);
			*par1 = num;

			if (num == 0) break;
		}

		str = MAX(ar) < MIN(ar) ? MAX(ar) : MIN(ar);
		dst = MAX(ar) > MIN(ar) ? MAX(ar) : MIN(ar);

		if (str + 1 == dst || str == dst) {
			printf("none\n");
		}
		else {
			for (par2 = str + 1; par2 < dst; par2++) {
				printf("%d ", *par2);
			}
		}

		printf("\n");
	}
	

}

int* MAX(int ar[]) {

	int *i, *pmax = ar;
	int max = 0;

	for (i = ar + 1; *i != 0 ; i++) {

		if (max < *i) {
			max = *i;
			pmax = i;
		}
	}

	return pmax;
}

int* MIN(int ar[]) {

	int* i = ar, *pmin = ar;
	int min = *i;

	for (i = ar + 1; *i != 0; i++) {

		if (min > *i) {
			min = *i;
			pmin = i;
		}
	}

	return pmin;
}