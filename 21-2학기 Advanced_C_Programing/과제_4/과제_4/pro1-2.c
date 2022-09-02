#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

typedef struct st {
	char* str;		// 문자열
	int cnt1;		// 자음 수 저장
	int cnt2;		// 모음 수 저장
	int num;		// 숫자 저장
	int result1;	// 곱셈결과 저장
	int result2;	// 곱셈결과 저장
} ST;

int main() {
	ST* ar;

	int N;
	char str[100];

	scanf("%d", &N);
	getchar();

	// N개 만큼 동적할당.
	ar = (ST*)malloc(N * sizeof(ST));
	if (ar == NULL) return -1;


	for (ST* p = ar; p < ar + N; p++) {

		// 자(모)음 수 초기화.
		p->cnt1 = 0;
		p->cnt2 = 0;

		gets(str);
		int len = strlen(str);

		// 문자길이만큼 동적할당
		p->str = (char*)malloc((len + 1) * sizeof(char));
		if (p->str == NULL) return -1;

		// 문자열 복사
		strcpy(p->str, str);

		for (char* q = str; q < str + len; q++) {
			
			// 숫자 저장
			if ('0' <= *q && *q <= '9') p->num = (*q - '0');
			
			// 모음 수 카운트
			else if ('a' == *q || 'e' == *q || 'i' == *q || 'o' == *q || 'u' == *q
				|| 'A' == *q || 'E' == *q || 'I' == *q || 'O' == *q || 'U' == *q)
				p->cnt2++;
			
			// 자음 수 카운트
			else if ('a' <= *q && * q <= 'z' || 'A' <= *q && *q <= 'Z') p->cnt1++;
		}

		// 큰 수 곱 저장
		p->result1 = p->cnt1 > p->cnt2 ? p->cnt1 * p->num : p->cnt2 * p->num;

		// 작은 수 곱 저장
		p->result2 = p->cnt1 > p->cnt2 ? p->cnt2 * p->num : p->cnt1 * p->num;

	}


	for (int i = 0; i < N ; i++) {

		for (int j = 0; j < N - 1; j++) {

			ST tmp;

			// 큰 수의 곱 내림차순 정렬
			if ((ar + j)->result1 < (ar + j + 1)->result1) {
				tmp = *(ar + j);
				*(ar + j) = *(ar + j + 1);
				*(ar + j + 1) = tmp;
			}

			// 같으면 작은 수의 곱 내림차순
			else if ((ar + j)->result1 == (ar + j + 1)->result1 && (ar + j)->result2 < (ar + j + 1)->result2) {
				tmp = *(ar + j);
				*(ar + j) = *(ar + j + 1);
				*(ar + j + 1) = tmp;
			}

		}

	}

	for (ST* p = ar; p < ar + N; p++) puts(p->str);

	if (ar != NULL) free(ar);
}

/*
5
His0tory
3Politics
2DonQuixote
LaPest9e
Chaos5
*/