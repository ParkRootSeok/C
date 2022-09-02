#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)


typedef struct Student
{
	char name[10], id[11], rank;

} St;

int main() {

	St st[5], * pst[5] = { &st[0], &st[1], &st[2], &st[3], &st[4] };
	int cnt = 0, num;
	char name[10], year[5] = {0}, rank;

	
	for (int i = 0; i < 5; i++) {

		scanf("%s %s %c", &pst[i]->name, &pst[i]->id, &pst[i]->rank);
		getchar();
	}
	gets(name);
	
	//입학년도 찾기
	for (int i = 0; i < 5; i++) {
		if ((strcmp(name, pst[i]->name)) == 0) {
			rank = pst[i]->rank; // 학점 복사
			strncpy(year, pst[i]->id, 4); // 입학년도 복사. 
		}
	}

	// 입학년도가 같은 학생 출력
	for (int i = 0; i < 5; i++) {

		if (strncmp(year, pst[i]->id, 4) == 0 
			&& rank == pst[i]->rank 
			&& strcmp(name, pst[i]->name) != 0) {
			cnt = 1;
			printf(" %s", pst[i]->name);
		}
	}
	printf("\n");


	if (cnt == 0) printf("0\n");
	// 입학년도, 입학년도 % 131 출력
	num = atoi(year) % 131;
	printf(" %s %d ", year, num);
	
}