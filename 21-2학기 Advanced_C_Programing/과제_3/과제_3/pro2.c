#include <stdio.h>
#pragma warning(disable:4996)

typedef struct _bank {
	int id;
	int arrival_time;
	int service_time;
	int waiting_time;
} BANK;

void waitingtime(BANK* bank, int N);
double avgtime(BANK* bank, int N);


int main() {
	int N; 
	BANK bank[100];

	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d %d", &bank[i].id, &bank[i].arrival_time, &bank[i].service_time);
	}

	for (int i = 0; i < N; i++) {
		waitingtime(bank, N);
	}

	printf("%.2f\n", avgtime(bank, N));
}

void waitingtime(BANK bank[], int N) {

	int wait = 0, total = 0;

	for (int i = 0; i < N; i++) {

		bank[i].waiting_time = wait;
		total += bank[i].service_time;
		wait = total - bank[i + 1].arrival_time;
	}

}

double avgtime(BANK bank[], int N) {

	double sum = 0;

	for (int i = 0; i < N; i++) {
		sum += bank[i].waiting_time;
	}

	return (double)(sum / N);
}