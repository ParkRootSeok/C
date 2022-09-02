#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

typedef struct _Point {
	int x, y;
} POINT;


int main() {
	POINT* pt, *p1 = NULL, *p2 = NULL;

	int N, max = 0;
	scanf("%d", &N);
	getchar();
	pt = (POINT *) malloc (N * sizeof(POINT));

	if (pt == NULL) {
		printf("Not enough Memory!");
		return -1;
	}

	for (POINT * p = pt; p < pt + N; p++) {
		scanf("%d %d", &p->x, &p->y);
	}

	for (POINT* p = pt; p < pt + N; p++) {
		
		for (POINT* q = pt; q < pt + N; q++) {
			int xlen = (p->x - q->x);
			int ylen = (p->y - q->y);
			int d = (xlen * xlen) + (ylen * ylen);
			
			if (max < d) {
				max = d;
				p1 = p;
				p2 = q;
			}

		}
	}

	printf("%d %d\n", p1->x, p1->y);
	printf("%d %d\n", p2->x, p2->y);

	free(pt);

}