#include <stdio.h>
#pragma warning(disable:4996)

void gcdlcm(int N, int M, int *pM, int *pm);

int main() {
	int N, M;

	scanf("%d %d", &N, &M);
	gcdlcm(N, M, &N, &M);
	
	printf("%d %d", N, M);
}

void gcdlcm(int N, int M, int* pM, int* pm) {

	int i;

	for (i = 1; i <= N && i <= M; i++) {

		if (N % i == 0 && M % i == 0) {
			*pM = i;
		}
	}

	for (i = 1; ; i++) {
		if (i % N == 0 && i % M == 0) {
			*pm = i;
			return 0;
		}
	}

	
}