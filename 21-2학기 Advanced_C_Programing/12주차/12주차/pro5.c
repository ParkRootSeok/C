#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

typedef struct _student {
	char* name;
	int kor, eng, math, diff;
} STUDENT;

STUDENT* difference(STUDENT* pst, int N);

int main() {

	int N;
	scanf("%d", &N);
	getchar();

	char tmp[100];
	STUDENT* st = (STUDENT*)malloc(N * sizeof(STUDENT)), *max;

	for (int i = 0; i < N; i++) {
		scanf("%s %d %d %d", &tmp, &st[i].kor, &st[i].eng, &st[i].math);
		getchar();
		
		int len = strlen(tmp);
		st[i].name = (char*)malloc((len + 1) * sizeof(char));
		strcpy(st[i].name, tmp);
	}

	max = difference(st, N);
	printf("%s %d", max->name, max->diff);


	for (int i = 0; i < N; i++) {
		free(st[i].name);
	}
	free(st);

}

STUDENT* difference(STUDENT* pst, int N) {
	STUDENT *tmp = NULL;
	int max, min, diff = -1;

	for (int i = 0; i < N; i++) {

		max = (pst + i)->kor >= (pst + i)->eng ? (pst + i)->kor : (pst + i)->eng;
		min = (pst + i)->kor <= (pst + i)->eng ? (pst + i)->kor : (pst + i)->eng;

		if (max < (pst + i)->math) max = (pst + i)->math;
		if (min > (pst + i)->math) min = (pst + i)->math;
		
		(pst + i)->diff = max - min;

		if (diff < (pst + i)->diff) {
			tmp = (pst + i);
		}
	}

	return tmp;
}

/*
4
jacob 31 32 41
cathy 41 51 52
park 61 51 41
jane 71 81 31

4
jacob 31 32 41
cathy 41 51 52
park 61 51 41
jane 81 71 31

4
jacob 31 32 41
cathy 41 51 52
park 61 51 41
jane 71 31 81

4
jacob 31 32 41
cathy 41 51 52
park 61 51 41
jane 31 71 81
*/