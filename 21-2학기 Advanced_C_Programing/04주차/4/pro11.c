#include <stdio.h>
#pragma warning(disable:4996)

typedef struct Student{
	int name[9];
	int score;
}St;

St* select_min(St * pst);

int main() {
	int i;
	St st[5], *min;

	for (i = 0; i < 5; i++) {
		scanf("%s %d", &st[i].name, &st[i].score);
	}

	min = select_min(st);
	printf("%s %d", min->name, min->score);
}

St* select_min(St *pst) {

	int i, j;

	St* min = &pst[0];

	for (i = 1; i < 5; i++) {

		for (j = 1; j < 5; j++) {

			if ((pst + j)->score < min->score) min = &pst[j];
			
		}
	}

	return min;
}


