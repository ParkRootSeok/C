#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int *p, *q, *j, x[100], N, y[100];

	scanf("%d", &N);
	for (p = x; p < x + N; p++) {
		scanf("%d", p);
	}

	int cnt, flag;
	for (p = x, j = y; p < x + N; p++) {
		
		flag = cnt = 0;

		for (q = x; q < x + N; q++) {
			if (*p == *q) cnt++;
		}

		
		for (q = y; q < y + N; q++) {

			if (*p == *q) {
				flag = 1;
				break;
			}
		}

		if (flag == 0) printf("%d %d\n", *p, cnt);
		
		*j = *p;
		j++;
	}

}

/*
7 
2 3 8 2 3 4 2
*/