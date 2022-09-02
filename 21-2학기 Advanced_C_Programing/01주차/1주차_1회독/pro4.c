#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int i, tmp;
	int ar[3], *par, *j;

	for (par = ar; par < ar + 3; par++) {
		scanf("%d", par);
	}
	par = ar;

	for (i = 0; i < 3; i++) {
		for (j = ar; j < ar + 2; j++)	{

			if (*j > *(j + 1)) {
				tmp = *(j);
				*(j) = *(j + 1);
				*(j + 1) = tmp;
			}
		}
	}

	printf("%d", *(par + 1));
}