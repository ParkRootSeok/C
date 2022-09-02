#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

/*
marriott 4 4.7 12.5 Y
ibis 2 3.5 5.6 N
novotel 3 3.0 2.7 N
renaissance 3 3.5 4.8 N
hyatt 5 3.5 7.4 Y
bestwestern 2 2.5 3.8 Y
*/

typedef struct hotel_info
{
	char name[31];
	char bf[2];
	int G;
	double R, D;

} Hinfo;

int in_hotel_info(Hinfo* p);
void out_hotel_info(Hinfo* p, int N, int G, double D);

int main() {

	Hinfo hotel[100], * pht = { &hotel };
	int N = in_hotel_info(pht); // 입력된 호텔수
	int G;
	double D;

	scanf("%d %lf", &G, &D);
	out_hotel_info(pht, N, G, D);
	
}


int in_hotel_info(Hinfo * p) {
	int cnt = 0;

	scanf("%s", (p + cnt)->name);
	while (strcmp((p + cnt)->name, "0") != 0) {
		scanf("%d %lf %lf %s", &(p + cnt)->G, &(p + cnt)->R, &(p + cnt)->D, &(p + cnt)->bf);
		cnt++;

		scanf("%s", (p + cnt)->name);
	}

	return cnt;
}

void out_hotel_info(Hinfo* p, int N, int G, double D) {
	Hinfo best[100], tmp;
	Hinfo *i, *j;

	int k = 0;
	for (i = p; i < p + N; i++) {
		if (i->G >= G && i->D <= D) best[k++] = *i;
	}

	// 평판도순 정렬
	for (i = best; i < best + (k - 1); i++) {

		for (j = best; j < best + k; j++) {

			// 평판도순 정렬
			if ((j)->R < (j + 1)->R) {
				tmp = *(j);
				*j = *(j + 1);
				*(j + 1) = tmp;
			}

			// 사전순 정렬(단, 평판도 동일)
			else if (j->R == (j + 1)->R && strcmp(j->name, (j + 1)->name) > 0) {
				tmp = *j;
				*j = *(j + 1);
				*(j + 1) = tmp;
			}
		}
	}

	// 출력
	for (i = best; i < best + k; i++) {
		printf("%s %d %.1f %.1f %s\n", i->name, i->G, i->R, i->D, i->bf);
	}
	
}


