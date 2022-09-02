#include <stdio.h>
#pragma warning(disable:4996)

typedef struct _bank {
	int id; // 아이디, T1, T2, T3 대신, 1, 2, 3, ... 으로 한다.
	int arrival_time; // 도착시간
	int service_time; // 서비스시간
	int waiting_time; // 대기시간
} BANK;

void watingtime(BANK guest[], int N);
double avgtime(BANK guest[], int N);

int main() {
	BANK guest[100], *p;
	int N;
	double avg;

	scanf("%d", &N);
	for (p = guest; p < guest + N; p++) {
		scanf("%d %d %d", &p->id, &p->arrival_time, &p->service_time);
	}

	watingtime(guest, N);
	avg = avgtime(guest, N);

	printf("%.2f", avg);

}


void watingtime(BANK guest[], int N) {
	BANK* p;

	int to = guest[0].service_time;
	guest[0].waiting_time = 0;

	for (p = guest + 1; p < guest + N; p++) {
		p->waiting_time = to - p->arrival_time;
		to += p->service_time;
	}
}
double avgtime(BANK guest[], int N) {
	int to = 0;

	for (BANK *p = guest; p < guest + N; p++) {
		to += p->waiting_time;
	}

	return to / 4.0;
}