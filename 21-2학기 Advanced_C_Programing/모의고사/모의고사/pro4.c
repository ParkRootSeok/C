#include <stdio.h>
#pragma warning(disable:4996)

/*
3
Ann
History 60
Politics 40
Chaos 100
LaPeste 10
DonQuixote 10
0
Branden
LaPeste 70
Chaos 100
History 60
0
Christina
0
*/

typedef struct _student {
		char name[10]; //학생이름
		char book[5][20]; //인증시험 본 책 이름 (예) History Politics
		int score[5]; //위 책에 대한 인증시험 점수 (예) 60 40
		int cnt, pcnt; //인증시험 본 책의 권수, 통과한 책의 권수
} ST;

int main() {
	int N, i, j;
	scanf("%d", &N);

	ST st[100];

	for (i = 0; i < N; i++) {

		int cnt = 0;

		scanf("%s", &st[i].name);
		for (j = 0;; j++) {
			scanf("%s", &st[i].book[j]);
			if (strcmp(st[i].book[j], "0") == 0) {
				break;
			}

			scanf("%d", &st[i].score[j]);
			if (st[i].score[j] >= 50) cnt++; // 통과한 책의 권수
		}
		
		st[i].pcnt = cnt;
	}

	for (i = 0; i < N; i++) {
		double pct = (st[i].pcnt / 5.0) * 100;
		printf("%s %.f%%\n", st[i].name, pct);
	}

}