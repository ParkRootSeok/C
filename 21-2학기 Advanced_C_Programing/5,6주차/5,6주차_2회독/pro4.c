#include <stdio.h>
#pragma warning(disable:4996)

typedef struct _info {

	int id_bike, num_guest, kind, M;
	char Goods, Join;
	double won;

}INFO;

void input(INFO * p, int N);
void compute(INFO* p, int N);
void bike_info_sort(INFO* p, int N);
void display(INFO* p, int N);

int main() {
	INFO guest[100];
	int N;
	scanf("%d", &N);

	input(guest, N);
	compute(guest, N);
	bike_info_sort(guest, N);
	display(guest, N);
}

void input(INFO* p, int N) {
	INFO* i;

	for (i = p; i < p + N; i++) {
		scanf("%d %d %c", &i->id_bike, &i->num_guest, &i->Goods);
		if (i->Goods == 'S') {
			getchar();
			scanf("%c %d %d", &i->Join, &i->kind, &i->M);
		}
		else {
			scanf("%d", &i->M);
		}
	}


}
void compute(INFO* p, int N) {
	INFO* i;
	for (i = p; i < p + N; i++) {

		// 정기권
		if (i->Goods == 'S') {
			// 가입 
			if (i->Join == 'N') {

				if (i->kind == 7) i->won = 3000;
				else if (i->kind == 30) i->won = 5000;
				else i->won = 15000;

			}

			else i->won = 0;
		} 
		// 일일권
		else i->won = 1000;

		if (i->M > 60) {
			int cnt = (i->M - 60) / 5;
			i->won += cnt * 200;
		}
	}

}

void bike_info_sort(INFO* p, int N) {
	INFO* i, *j, tmp;
	for ( i = p; i < p + N - 1; i++) {
		for (j = i + 1; j < p + N; j++) {
			if (i->Goods > j->Goods) {
				tmp = *i;
				*i = *j;
				*j = tmp;
			}
			else if (i->Goods == j->Goods && i->id_bike > j->id_bike) {
				tmp = *i;
				*i = *j;
				*j = tmp;
			}
		}
	}

}

void display(INFO* p, int N) {

	INFO* i;
	int D = 0, S = 0, total = 0;

	for (i = p; i < p + N; i++) {
		printf("%d %d %c %.f\n", i->id_bike, i->num_guest, i->Goods, i->won);

		if (i->Goods == 'S') S += i->won;
		else D += i->won;
		total += i->won;
	}

	printf("%d %d %d", D, S, total);

}