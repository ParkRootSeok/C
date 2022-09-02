#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	
	int ar[5], * p, * q, k, rank[5] = {0};

	for (p = ar; p < ar + 5; p++) {
		scanf("%d", p);
	}

	for (p = ar, k = 0; p < ar + 5; p++, k++) {
		
		for (q = ar; q < ar + 5; q++) {

			if (*p < *q) rank[k]++;
		}
	}


	for (p = ar, q = rank; p < ar + 5; p++, q++) {
		printf("%d=r%d ", *p, *q + 1);
	}

}