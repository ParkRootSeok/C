#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

typedef struct st {
	char* str; // 문자열
	int cnt1; // 자음 수 저장
	int cnt2; // 모음 수 저장
} ST;

int main() {
	ST* ar;

	int N;
	char str[100];

	scanf("%d", &N);
	getchar();

	ar = (ST*)malloc(N * sizeof(ST));
	if (ar == NULL) return - 1;

	for (ST *p = ar; p < ar + N; p++) {
		p->cnt1 = 0;
		p->cnt2 = 0;

		gets(str);
		p->str = (char*)malloc((strlen(str) + 1) * sizeof(char));
		strcpy(p->str, str);
		
		for (char *q = str; q < str + strlen(str); q++) {
			
			if ('a' == *q || 'e' == *q || 'i' == *q || 'o' == *q || 'u' == *q
				|| 'A' == *q || 'E' == *q || 'I' == *q || 'O' == *q || 'U' == *q)
				p->cnt2++;

			// 자음 수 카운트
			else if ('a' <= *q && *q <= 'z' || 'A' <= *q && *q <= 'Z') p->cnt1++;
		
		}

		printf("%d %d\n", p->cnt1, p->cnt2);
	}


	for (ST *p = ar; p < ar + N - 1; p++) {

		for (ST *q = p + 1; q < ar + N; q++) {

			ST tmp;

			if (p->cnt1 < q->cnt1) {
				tmp = *p;
				*p = *q;
				*q = tmp;
			}
			else if (p->cnt1== q->cnt1 && p->cnt2 < q->cnt2) {
				tmp = *p;
				*p = *q;
				*q = tmp;
			}

		}

	}

	for (ST* p = ar; p < ar + N; p++) puts(p->str);
	if (ar != NULL) free(ar);
}

/*
5
History
Politics
DonQuixote
LaPeste
Chaos
*/