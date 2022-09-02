#include <stdio.h>
#pragma warning(disable:4996)

struct Student {
	int name[7];
	int ko;
	int en;
	int ma;
}St;


int main() {

	struct Student st[50], *p = { &st };
	int N;
	double avg[50] = { 0 };

	// 학생수/이름/점수 입력 및 평균 구하기
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {

		scanf("%s %d %d %d", &p->name, &p->ko, &p->en, &p->ma);
		avg[i] += (p->ko + p->en + p->ma);
		avg[i] /= 3;

		if (avg[i] >= 90) {
			printf("%s %.1f A\n", p->name, avg[i]);
		}
		else if (avg[i] >= 80) {
			printf("%s %.1f B\n", p->name, avg[i]);
		}
		else if (avg[i] >= 70) {
			printf("%s %.1f C\n", p->name, avg[i]);
		}
		else printf("%s %.1f D\n", p->name, avg[i]);
	}


}

