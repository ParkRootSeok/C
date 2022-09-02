#include <stdio.h>
#pragma warning(disable:4996)

typedef struct date{

	int y, m, d;

} DATE;

DATE* select_min(DATE* pdt1, DATE* pdt2);

int main() {

	DATE date[2], * pdt[2] = { &date[0], &date[1]}, * min;

	scanf("%d/%d/%d", &pdt[0]->y, &pdt[0]->m, &pdt[0]->d);
	scanf("%d/%d/%d", &pdt[1]->y, &pdt[1]->m, &pdt[1]->d);

	min = select_min(pdt[0], pdt[1]);
	printf("%d/%d/%d", min->y, min->m, min->d);
}


DATE* select_min(DATE* pdt1, DATE* pdt2) {

	
	// pdt1
	if (pdt1-> y < pdt2-> y) return pdt1;
	// pdt2
	else if (pdt1->y > pdt2->y) return pdt2;
	else {
		if (pdt1->m < pdt2->m) return pdt1;
		else if (pdt1->m > pdt2->m) return pdt2;
		else {
			if (pdt1->d < pdt2->d) return pdt1;
			else return pdt2;
		}
	}

}