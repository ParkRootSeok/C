#include <Stdio.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct _student {
	char name[10];
	char No[11];
	char R[2];
} STUDENT;


int main() {
	
	STUDENT st[5], *p;
	char name[10] = {0}, Rank[2] = { 0 }, year[5] = { 0 };

	for (p = st; p < st + 5; p++) {
		scanf("%s %s %s", &p->name, &p->No, &p->R);
		getchar();
	}
	gets(name);


	for (p = st; p < st + 5; p++) {
		if (strcmp(p->name, name) == 0) {
			strcpy(Rank, p->R); // 학점
			strncpy(year, p->No, 4); // 학번
		}
	}

	for (p = st; p < st + 5; p++) {

		if (strcmp(Rank, p->R) == 0 
			&& strncmp(year, p->No, 4) == 0
			&& strcmp(name, p->name) != 0) {
			printf(" %s", p->name);
		}
	}
	
	printf("\n %s %d", year, atoi(year) % 131);

}