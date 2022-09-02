
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

typedef struct subject {
	char* name;
	double score;
}SUBJECT;

typedef struct student {
	char* name;
	char id[5];
	int numSubject;
	SUBJECT* psub;
	double avg;
}STUDENT;

int main() {

	STUDENT* st, st_temp;

	int N, start = 0, end = 0, name_f = 0, id_f = 0, w_cnt = 0, s_cnt = 0, tlen = 0, pidx = 0;
	char tmp[101], * ptmp;
	double score = 0;
	scanf("%d", &N);
	getchar();
	st = (STUDENT*)malloc(sizeof(STUDENT) * N);

	for (int i = 0; i < N; i++) {

		start = end = id_f = name_f = s_cnt = pidx = 0;

		gets(tmp);
		tlen = strlen(tmp);
		ptmp = tmp;

		//과목개수만큼 과목구조체의 메모리를 할당.
		for (int j = 0; j <= tlen; j++) {
			if (tmp[j] == ' ') s_cnt++;
		}

		st[i].numSubject = s_cnt / 2;
		st[i].psub = (SUBJECT*)malloc(sizeof(SUBJECT) * st[i].numSubject);

		for (int j = 0; j <= tlen; j++) {
			if (tmp[j] == ' ' || tmp[j] == NULL) {
				w_cnt++;
				end = j;

				if (name_f == 0) {
					// 동적 할당
					st[i].name = (char*)malloc(sizeof(char) * (end - start + 1));

					// 문자열 복사
					strncpy(st[i].name, ptmp, end - start);

					//문자열 끝 입력
					st[i].name[end - start] = NULL;
					for (int i = 0; i <= end - start; i++) ptmp++;
					name_f = 1;
				}

				else if (id_f == 0) {

					// 문자열 복사
					strncpy(st[i].id, ptmp, end - start);

					//문자열 끝 입력
					st[i].id[end - start] = NULL;

					// 문자열 위치 이동
					ptmp += end - start + 1;

					id_f = 1;
				}


				//과목은 홀수, 점수는 짝수
				else if (w_cnt % 2 == 1) {

					// 동적할당 후 문자열 복사
					st[i].psub[pidx].name = (char*)malloc(sizeof(char) * (end - start + 1));
					strncpy(st[i].psub[pidx].name, ptmp, end - start);

					//문자열 끝 입력
					st[i].psub[pidx].name[end - start] = NULL;

					// 문자열 위치 이동
					for (int i = 0; i <= end - start; i++) ptmp++;

				}

				else if (w_cnt % 2 == 0) {
					for (int k = start; k < end; k++) {
						score = score * 10;
						score = score + tmp[k] - 48;
					}
					st[i].psub[pidx].score = score;//과목 점수 저장

					pidx++;//다음 과목구조체 배열로 이동
					for (int i = 0; i <= end - start; i++) ptmp++;
					score = 0;
				}
				start = end + 1; // 시작 위치 이동
			}
			// 평균 구하기
			double avg = 0;
			for (int p = 0; p < st[i].numSubject; p++) avg += st[i].psub[p].score;
			avg = avg / (double)st[i].numSubject;
			st[i].avg = avg;
		}
	}

	//내림차순 정렬
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {

			if (st[j].avg < st[j + 1].avg) {
				st_temp = st[j];
				st[j] = st[j + 1];
				st[j + 1] = st_temp;
			}

			else if (st[j].avg == st[j + 1].avg && (strcmp(st[j].id, st[j + 1].id) > 0)) {
					st_temp = st[j];
					st[j] = st[j + 1];
					st[j + 1] = st_temp;
			}

		}
	}


	int K;
	scanf("%d", &K);
	K = K - 1;
	//K번째학생의 제일 잘본 과목 찾기
	double max = 0;
	int max_idx = 0;

	for (int i = 0; i < st[K].numSubject; i++) {
		if (max < st[K].psub[i].score) {
			max = st[K].psub[i].score;
			max_idx = i;
		}
	}

	printf("%s %s %.2f %s %.2f", st[K].name, st[K].id, st[K].avg, st[K].psub[max_idx].name, max);

	//메모리해제파트
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < st[i].numSubject; j++) {
			free(st[i].psub[j].name);
		}
	}
	for (int i = 0; i < N; i++) {
		free(st[i].name);
		free(st[i].psub);
	}
	free(st);

	return 0;
}

/*
5
HongGilDong 1003 Math 85 C 80 AdvC 90
JeonWooChi 1001 English 60 C 75 Physics 80 Math 70
HeungBoo 1002 Economics 80 AdvC 90 Math 80 C 90
NolBoo 1004 Ethics 50 C 62
Euler 1005 Math 100 Physics 90 AdvC 85
2
*/