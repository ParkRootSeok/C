#include <stdio.h>
#pragma warning(disable:4996)

int passengerN(int n);
void rebooking(int* ar);
int changeseat(int* ar);

int main() {

	int n; 
	int *p, ar[21] = {0};

	scanf("%d", &n);

	for (p = ar; p < ar + n; p++) {
		scanf("%d", p);
	}

	if (passengerN(n) == 0) {
		printf("0\n");

		rebooking(ar);

		for (p = ar; *p != 0; p++) {
			printf("%d ", *p);
		}

	}
	else {
		printf("-1\n");
		return 0;
	}
}

int passengerN(int n) {

	if (n < 5) return -1;
	else return 0;

}

void rebooking(int* ar) {
	int *i, * j;

	for (i = ar; *i != 0 && i < ar + 21; i++) {
		for (j = i + 1; *j != 0 && j < ar + 21; j++) {
			if (*i == *j && i != j) {
				*j = changeseat(ar);
			}
		}
	}
}

int changeseat(int* ar) {
	int n;
	int *i;

	for (n = 1; n < 22; n++) {

		int flag = 0;

		for (i = ar; *i != 0 && i < ar + 21; i++) {

			if (n == *i) {
				flag = 1;
			}
		}

		if (flag == 0) {
			return n;
		}
	}

}