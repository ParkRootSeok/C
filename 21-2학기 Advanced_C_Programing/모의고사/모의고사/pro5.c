#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct _student{
	char department[50];
	int no;
} ST;

int main() {
	int i, j, k, N;
	ST st[100], tmp;

	// 입력 받기
	scanf("%d", &N);
	getchar();
	for (i = 0; i < N; i++) {
		gets(st[i].department);
		scanf("%d", &st[i].no);
		getchar();
	}

	
	for (i = 0; i < N - 1; i++) {
		for (j = i + 1; j < N; j++) {

			// 1차 사전 순으로 정렬
			if (strcmp(st[i].department, st[j].department) > 0) {
				tmp = st[i];
				st[i] = st[j];
				st[j] = tmp;
			}
			// 2차 학번순 정렬
			else if (strcmp(st[i].department, st[j].department) == 0  
				&& st[i].no > st[j].no) {
				tmp = st[i];
				st[i] = st[j];
				st[j] = tmp;

			}
		}
	}
	
	for (i = 0; i < N; i++) {
		printf("%s %d\n", st[i].department, st[i].no);
	}

}

/*
5
computer engineering
1712745
biology
1720824
computer engineering
1760432
biology
1712345
computer engineering
1713812
*/