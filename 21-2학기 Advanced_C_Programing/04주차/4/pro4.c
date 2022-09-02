#include <stdio.h>
#pragma warning(disable:4996)

struct Student {
	int name[19];
	int score1;
	int score2;
	int score3;
}St;


int main() {
	
	struct Student st[20];
	int N; 
	double avg[20] = { 0 };

	// 학생수/이름/점수 입력 및 평균 구하기
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%s %d %d %d", &st[i].name, &st[i].score1, &st[i].score2, &st[i].score3);
		avg[i] += st[i].score1 + st[i].score2 + st[i].score3;
		avg[i] /= 3;
	}

	for (int i = 0; i < N; i++) {

		if (avg[i] >= 90) {
			printf("%s %.1f A", st[i].name, avg[i]);
		}
		else if (avg[i] >= 80) {
			printf("%s %.1f B", st[i].name, avg[i]);
		}
		else if (avg[i] >= 70) {
			printf("%s %.1f C", st[i].name, avg[i]);
		}
		else printf("%s %.1f F", st[i].name, avg[i]);
			
	}

}

