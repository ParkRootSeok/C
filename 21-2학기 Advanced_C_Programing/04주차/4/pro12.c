#include <stdio.h>
#pragma warning(disable:4996)

typedef struct Student {
	int name[9];
	int scr1, scr2, scr3;
	double avg;
}St;

void read_data(St * st);
void cal_avg(St* st);
void sort(St* st);
void print_score(St* st);

int main() {
	St st[10];

	read_data(st);
	cal_avg(st);
	sort(st);
	print_score(st);
}

void read_data(St* st) {

	for (int i = 0; i < 10;i++) 
		scanf("%s %d %d %d", &st[i].name, &st[i].scr1, &st[i].scr2, &st[i].scr3);

}

void cal_avg(St* st) {
	int sum;
	double avg;

	for (int i = 0; i < 10; i++) {
		sum = 0;
		sum = (st[i].scr1 + st[i].scr2 + st[i].scr3);
		avg = sum / 3.0;
		st[i].avg = avg;
	}
}

void sort(St* st) {
	int i, j;
	St tmp;

	for ( i = 0; i < 9; i++) {

		for (j = 0; j < 9; j++) {

			if (st[j].avg < st[j + 1].avg) {
				tmp = st[j + 1];
				st[j + 1] = st[j];
				st[j] = tmp;
			}
		}
	}
}

void print_score(St* st) {
	
	printf("%s %.2f\n", st[0].name, st[0].avg);
	printf("%s %.2f\n", st[9].name, st[9].avg);
	printf("%s %.2f\n", st[7].name, st[7].avg);
	printf("%s %.2f\n", st[8].name, st[8].avg);
	printf("%s %.2f\n", st[9].name, st[9].avg);

}