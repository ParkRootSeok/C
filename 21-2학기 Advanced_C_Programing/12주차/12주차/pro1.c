#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct _student {

	char name[20];
	int kor;

} STUDENT;

int main() {

	int N; 
	scanf("%d", &N);
	getchar();

	int scr1, scr2;
	char tmp1[100], tmp2[100];

	STUDENT* st = (STUDENT*)malloc(N * sizeof(STUDENT));

	for (int i = 0; i < N; i++) {
		scanf("%s %d", &st[i].name, &st[i].kor);
		getchar();
	}

	scanf("%d %d", &scr1, &scr2);
	getchar();
	scanf("%s %s", &tmp1, &tmp2);


	for (int i = 0; i < N; i++) {

		if (scr1 <= st[i].kor && st[i].kor <= scr2) {
			printf("%s %d\n", st[i].name, st[i].kor);
		}
	}
	printf("*****\n");

	for (int i = 0; i < N; i++) {

		if (strcmp(tmp1, st[i].name) < 0 && strcmp(tmp2, st[i].name) > 0) {
			printf("%s %d\n", st[i].name, st[i].kor);
		}
	}
}


/*
5
jacob 31
kim 41
lee 51
park 61
jane 71
60 75
ja lz
*/