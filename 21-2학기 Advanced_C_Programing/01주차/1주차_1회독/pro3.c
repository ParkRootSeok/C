#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int N, cnt, ar[50], *par;

	scanf("%d", &N);

	for (par = ar; par < ar + N; par++) {
		scanf("%d", par);
	}

	cnt = 0;
	for (par = ar; *par != 0 ; par++) {
		cnt++;
	}

	printf("%d", cnt);
}