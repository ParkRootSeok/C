#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int ar[50] = {0}, N, cnt;
	int *p;

	scanf("%d", &N);

	for (p = ar; p < ar + N; p++) {
		scanf("%d", p);
	}

	cnt = 0;
	for (p = ar; p < ar + N  && *p != 0; p++) {
		cnt++;
	}

	printf("%d", cnt);

}