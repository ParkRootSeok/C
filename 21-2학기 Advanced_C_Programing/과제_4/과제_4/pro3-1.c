#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct student {
	char* studentName; // 학생 이름
	char id[5]; // 학생 학번
	char* subjectName; // 과목 이름
	double subjectScore; // 과목 점수
} STUDENT;

int main() {
	STUDENT* st, * p;
	
	char str[100], *tmp;
	int N, K, len;
	scanf("%d", &N);
	getchar();
	st = (STUDENT*)malloc(N * sizeof(STUDENT)); // N명 학생만큼 동적할당.


	for (p = st; p < st + N; p++) {

		int space = 0, words = 0, name_f = 0, id_f = 0, subname_f = 0, subscr_f = 0,
			start = 0, end = 0;

		gets(str);
		len = strlen(str);
		tmp = str;

		for (int i = 0; i <= len; i++) {

			if (str[i] == ' ' || str[i] == NULL) {

				end = i;

				// 이름 저장
				if (name_f == 0) {
					p->studentName = (char*)malloc((end - start + 1) * sizeof(char));
					strncpy(p->studentName, tmp, end - start);
					p->studentName[end - start] = 0;
					for (int i = 0; i <= end - start; i++) tmp++; // 주소 이동

					name_f = 1;
				}
				// id 저장
				else if (id_f == 0) {
					strncpy(p->id, tmp, end - start);
					p->id[4] = 0;
					tmp += end - start + 1; // 주소 이동

					id_f = 1;
				}

				// 과목 이름 저장
				else if (subname_f == 0) {
					p->subjectName = (char*)malloc((end - start + 1) * sizeof(char));
					strncpy(p->subjectName, tmp, end - start);
					p->subjectName[end - start] = 0;
					for (int i = 0; i <= end - start; i++) tmp++; // 주소 이동

					subname_f = 1;
				}

				// 점수 저장
				else if (subscr_f == 0) {

					double scr = 0;
					char* subscr;
					subscr = (char*)malloc((end - start + 1) * sizeof(char));

					strncpy(subscr, tmp, end - start);
					subscr[end - start] = 0;

					for (int i = 0; i < strlen(subscr); i++) {
						scr *= 10;
						scr += subscr[i] - '0';
					}
					p->subjectScore = scr;

					for (int i = 0; i <= end - start; i++) tmp++; // 주소 이동

					subscr_f = 1;
				}
				start = end + 1;
			}
		}
		
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (st[j].subjectScore < st[j + 1].subjectScore) {//학생들의 평균순으로 내림차순 정렬을 실행합니다
				STUDENT st_temp = st[j];
				st[j] = st[j + 1];
				st[j + 1] = st_temp;
			}
		}
	}

	scanf("%d", &K);
	K -= 1;
	printf("%s %s %s %.2f\n", st[K].studentName, st[K].id, st[K].subjectName, st[K].subjectScore);
}

/*
5
HongGilDong 1003 Math 78
JeonWooChi 1001 English 60
HeungBoo 1002 Economics 80
NolBoo 1004 Ethics 80
Euler 1005 Math 100
2
*/