#include <stdio.h>
#pragma warning(disable:4996)

struct NUM {
	int rank;
	int num;
};

int main() {
	int num[10], cnt;
	struct NUM n[10];

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 10; i++) {

		cnt = 1;
	
		for (int j = 0; j < 10; j++) {

			if (num[i] < num[j]) {
				cnt++;
			}
		}

		n[cnt - 1].rank = cnt;
		n[cnt - 1].num = num[i];
	}

	printf("%d %d", n[2].num, n[6].num);
}