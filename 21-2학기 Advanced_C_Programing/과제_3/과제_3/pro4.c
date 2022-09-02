#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct bike_info {

	int Bnum; // ������ ��ȣ
	int Cnum; // �մ� ��ȣ
	char Goods; // ��ǰ
	char Join; // ���� ����
	int kind; // ����� ����
	int m; // �뿩�ð�
	double won; // ���

} INFO;

void input(INFO * info, int N);
void compute(INFO* info, int N);
void display(INFO* info, int N);
void bike_info_sort(INFO* info, int N);


int main() {

	INFO bike[100];

	int N;
	scanf("%d", &N);

	input(bike, N);
	compute(bike, N);
	bike_info_sort(bike, N);
	display(bike, N);

}

void input(INFO* info, int N) {
	int i;

	for (i = 0; i < N; i++) {

		scanf("%d %d %c", &(info + i)->Bnum, &(info + i)->Cnum, &(info + i)->Goods);
		getchar();

		if ((info + i)->Goods == 'S') {
			scanf("%c %d %d", &(info + i)->Join, &(info + i)->kind, &(info + i)->m);
		} else{
			scanf("%d", &(info + i)->m);
		}

	}
}

void compute(INFO* info, int N) {

	int i;

	for (i = 0; i < N; i++) {

		// �����
		if ((info + i)->Goods == 'S') {
			
			// ����
			if ((info + i)->Join == 'Y') {
				(info + i)->won = 0;
			}

			// �̰���
			else {
				if ((info + i)->kind == 7) {
					(info + i)->won = 3000;
				}
				else if ((info + i)->kind == 30) {
					(info + i)->won = 5000;
				}
				else (info + i)->won = 15000;
			}
		}

		// ���ϱ�
		else (info + i)->won = 1000;
			
		// 60�� ���ʰ�
		if ((info + i)->m <= 60) (info + i)->won += 0;

		// 60�� �ʰ�
		else if ((info + i)->m > 60) {
			int to, m = (info + i)->m;

			to = (m - 60) / 5; // �ʰ��� �ð�
			(info + i)->won += (to * 200);
		}


	}

}

void bike_info_sort(INFO* info, int N) {
	INFO tmp;
	int i, j;

	for (i = 0; i < N ; i++) {
		for (j = i + 1; j < N ; j++) {

			// 1�� ��ǰ���� ��������
			if ((info + i)->Goods > (info + j)->Goods) {
				tmp = *(info + i);
				*(info + i) = *(info + j);
				*(info + j) = tmp;
			}

			// 2�� ��ǰ�� ������ ����ũ ���� ����
			else if ((info + i)->Goods == (info + j)->Goods
				&& (info + i)->Bnum > (info + j)->Bnum) {
				tmp = *(info + i);
				*(info + i) = *(info + j);
				*(info + j) = tmp;
			}

		}
	}
}


void display(INFO* info, int N) {

	int i, D = 0, S = 0;

	for (i = 0; i < N; i++) {
		printf("%d %d %c %.f\n", (info + i)->Bnum, (info + i)->Cnum, (info + i)->Goods, (info + i)->won);

		if ((info + i)->Goods == 'D') {
			D += (info + i)->won;
		}  
		else S += (info + i)->won;
	}

	printf("%d %d %d\n", D, S, D + S);

}

