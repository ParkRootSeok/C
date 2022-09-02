#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct bike_info {

	int Bnum; // 자전거 번호
	int Cnum; // 손님 번호
	char Goods; // 상품
	char Join; // 가입 유무
	int kind; // 정기권 종류
	int m; // 대여시간
	double won; // 요금

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

		// 정기권
		if ((info + i)->Goods == 'S') {
			
			// 가입
			if ((info + i)->Join == 'Y') {
				(info + i)->won = 0;
			}

			// 미가입
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

		// 일일권
		else (info + i)->won = 1000;
			
		// 60분 미초과
		if ((info + i)->m <= 60) (info + i)->won += 0;

		// 60분 초과
		else if ((info + i)->m > 60) {
			int to, m = (info + i)->m;

			to = (m - 60) / 5; // 초과한 시간
			(info + i)->won += (to * 200);
		}


	}

}

void bike_info_sort(INFO* info, int N) {
	INFO tmp;
	int i, j;

	for (i = 0; i < N ; i++) {
		for (j = i + 1; j < N ; j++) {

			// 1차 상품별로 오름차순
			if ((info + i)->Goods > (info + j)->Goods) {
				tmp = *(info + i);
				*(info + i) = *(info + j);
				*(info + j) = tmp;
			}

			// 2차 상품이 같을때 바이크 순서 정렬
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

