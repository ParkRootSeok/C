#include <stdio.h>
#pragma warning(disable:4996)

struct Student {
	int sex, kg, cm;
} St;


int main() {

	struct Student st[10];
	int N, fst, snd, third;
	

	// 학생수/이름/점수 입력 및 평균 구하기

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &st[i].sex, &st[i].kg, &st[i].cm);
	}

	fst = snd = third = 0;
	

	for (int i = 0; i < N; i++) {

		if (st[i].sex == 1) {
			if (st[i].cm >= 175) {
				if (st[i].kg >= 70) fst++;
				else if (st[i].kg >= 60) snd++;
				else third++;
			}
			else if (st[i].cm >= 165) {
				if (st[i].kg >= 70) third++;
				else if (st[i].kg >= 60) fst++;
				else snd++;
			}
			else {
				if (st[i].kg >= 70) snd++;
				else if (st[i].kg >= 60) third++;
				else fst++;
			}
		}

		else {
			if (st[i].cm >= 175) {
				if (st[i].kg >= 60) fst++;
				else if (st[i].kg >= 50) snd++;
				else third++;
			}
			else if (st[i].cm >= 165) {
				if (st[i].kg >= 60) third++;
				else if (st[i].kg >= 50) fst;
				else snd++;
			}
			else {
				if (st[i].kg >= 60) snd++;
				else if (st[i].kg >= 50) third++;
				else fst++;
			}
		}
	}

	printf("%d %d %d", fst, snd, third);
}

