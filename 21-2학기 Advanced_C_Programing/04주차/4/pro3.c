#include <stdio.h>
#pragma warning(disable:4996)

struct Student {
	int name[9];
	int score;
}St;

int main() {
	struct Student st[5];
	double avg = 0;


	// �̸�/���� �Է� �� ��� ���ϱ�
	for (int i = 0; i < 5; i++) {
		scanf("%s %d", &st[i].name , &st[i].score);
		avg += st[i].score;
	}
	avg /= 5;

	for (int i = 0; i < 5; i++)	{

		// ��� ���� �л� ���
		if (avg > st[i].score) {
			puts(st[i].name);
		}
	}

}


