#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct _info {

	char name[31], bf[2];
	int G;
	double R, D;

} INFO;

int in_hotel_info(INFO ht[]);
void out_hotel_info(INFO ht[], int N, int G, double D);

int main() {
	INFO ht[100];
	int N, G;
	double D;

	N = in_hotel_info(ht);
	scanf("%d %lf", &G, &D);
	out_hotel_info(ht, N, G, D);

}

int in_hotel_info(INFO *p) {
	
	int cnt = 0;

	while (1) {
		scanf("%s", &(p + cnt)->name);
		if (strcmp((p + cnt)->name, "0") == 0) break;
		scanf("%d %lf %lf %s", &(p + cnt)->G, &(p + cnt)->R, &(p + cnt)->D, &(p + cnt)->bf);
		cnt++;
	}

	return cnt;

}

void out_hotel_info(INFO *p, int N, int G, double D) {

	INFO best[100], *i, *j, tmp;

	int cnt = 0;
	for (i = p; i < p + N;i++) {

		if (i->D <= D && i->G >= G) {
			best[cnt++] = *i;
		}
	}

	for (i = best; i < best + cnt - 1; i++) {
		for (j = i + 1; j < best + cnt; j++) {

			if (i->R < j->R) {
				tmp = *i;
				*i = *j;
				*j = tmp;
			}

			else if (i->R == j->R && strcmp(i->name, j->name) > 0) {
				tmp = *i;
				*i = *j;
				*j = tmp;
			}

		}
	}

	for (i = best; i < best + cnt; i++) {
		printf("%s %d %.1f %.1f %s\n", i->name, i->G, i->R, i->D, i->bf);
	}
}

/*
marriott 4 4.7 12.5 Y
ibis 2 3.5 5.6 N 
novotel 3 3.0 2.7 N
renaissance 3 3.5 4.8 N
hyatt 5 3.5 7.4 Y
bestwestern 2 2.5 3.8 Y
*/