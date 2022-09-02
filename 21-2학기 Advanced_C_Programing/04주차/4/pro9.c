#include <stdio.h>
#pragma warning(disable:4996)


typedef struct {
	int max, min, mtm, psrc;
	char pass[2];
} RESULT;

void passorfail(RESULT * prs);

int main() {
	RESULT rs, *prs = &rs;
	
	scanf("%d %d %d", &prs->max, &prs->min, &prs->psrc);
	passorfail(prs);

	printf("%d %s", prs->mtm, prs->pass);
}


void passorfail(RESULT* prs) {

	prs->mtm = prs->max - prs->min;

	if (prs->mtm <= prs->psrc) prs->pass[0] = 'P';
	else prs->pass[0] = 'F';

	prs->pass[1] = '\0';
}