#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

typedef struct _student {

	char *name;
	int kor;

} STUDENT; 

STUDENT* center(STUDENT* p, int N);

int main() {
	STUDENT* st, *cen;
	int N;

	scanf("%d", &N);
	getchar();

	st = (STUDENT*)malloc(N * sizeof(STUDENT));

	if (st == NULL) {
		printf("Not enough Memory!");
		return -1;
	}

	for (STUDENT* p = st; p < st + N; p++) {
		
		p->name = (char*)malloc(31 * sizeof(char));

		if (p->name == NULL) {
			printf("Not enough Memory!");
			return -1;
		}
		
		scanf("%s %d", &*p->name, &p->kor);
		getchar();
	}

	cen = center(st, N);
	printf("%s %d", cen->name, cen->kor);

	free(st->name);
	free(st);
}

STUDENT* center(STUDENT* st, int N) {
	STUDENT* cen = NULL;
	int flag = 0;
	double avg = 0, min;

	for (STUDENT* p = st; p < st + N; p++) {
		avg += p->kor;
	}
	avg /= (double)N;

	for (STUDENT* p = st; p < st + N; p++) {

		double len = (avg - p->kor) * (avg - p->kor);

		if (flag == 0) {
			min = len;
			cen = p;
			flag = 1;
		}
		else if (min > len) {
			min = len;
			cen = p;
		}
	}

	return cen;
}