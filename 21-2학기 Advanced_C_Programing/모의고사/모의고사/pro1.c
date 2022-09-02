#include <stdio.h>
#pragma warning(disable:4996)

void input(int* p, int M);
int* sel_max(int* p, int M);
void output(int* p, int N);


int main() {
	int in[100], out[100], * max, i, N, M;

	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++) {
		input(in, M);
		max = sel_max(in, M);
		out[i] = *max;
	}

	output(out, N);
	return 0;
}

void input(int* p, int M) {
	int* i;

	for (i = p; i < p + M; i++) {
		scanf("%d", i);
	}
}

int* sel_max(int* p, int M) {
	int cnt, max = 0, flag = 0;
	int *i, *j, *pmax = p;

	for (i = p; i < p + M; i++) {

		cnt = 0;
		
		for (j = p; j < p + M; j++) {
			if (*i == *j && i != j) {
				cnt++;
			}
		}


		if (max < cnt) {
			max = cnt;
			pmax = i;
		}
	}

	if (max == 0) return p;
	else return pmax;
}

void output(int* p, int N) {

	int* i;

	for (i = p; i < p + N; i++) {
		printf(" %d", *i);
	}

}