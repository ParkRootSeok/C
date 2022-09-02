#include <stdio.h>
#pragma warning(disable:4996)

struct Student {
	int name[9];
	int score;
}St;

int main() {
	struct Student st[5];
	double avg = 0;


	// 이름/점수 입력 및 평균 구하기
	for (int i = 0; i < 5; i++) {
		scanf("%s %d", &st[i].name , &st[i].score);
		avg += st[i].score;
	}
	avg /= 5;

	for (int i = 0; i < 5; i++)	{

		// 평균 이하 학생 출력
		if (avg > st[i].score) {
			puts(st[i].name);
		}
	}

}


