#include <stdio.h>	
#pragma warning(disable:4996)

struct complex* lager_complex(struct complex *pcp1, struct complex *pcp2);

struct complex {
	double x, y;
};


int main() {
	struct complex cp1, cp2, cp3;
	struct complex *pcp[3] = { &cp1, &cp2, &cp3 };

	for (int i = 0; i < 2; i++)	{
		scanf("%lf %lf", &pcp[i]->x, &pcp[i]->y);
	}

	pcp[2] = lager_complex(pcp[0], pcp[1]);

	printf("%.1f %.1f", pcp[2]->x, pcp[2]->y);

}


struct complex* lager_complex(struct complex *pcp1, struct complex *pcp2) {

	double abs1, abs2;

	abs1 = (pcp1->x * pcp1->x) + (pcp1->y * pcp1->y);
	abs2 = (pcp2->x * pcp2->x) + (pcp2->y * pcp2->y);

	if (abs1 > abs2) return pcp1;
	else return pcp2;
;
}