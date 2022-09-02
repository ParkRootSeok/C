#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char *p, *q, A[201], B[201], C[201];
	int N,len, num, flag = 0;

	gets(A);
	gets(B);
	
	N = 0;
	while (N < 11) {
		// A - > B 
		strcpy(C, A);
		len = strlen(C);

		for (p = C; p < C + 20 && *p != '\0'; p++) {

			if ('A' <= *p && *p <= 'Z') {
				*p += N;
			}
			else if ('a' <= *p && *p <= 'z') {
				*p -= N;
			}
			else if ('0' <= *p && *p <= '9') {



				// 두 자리수일 경우
				if ('0' <= *(p + 1) && *(p + 1) <= '9') {
					char ch = (*p - '0') * 10 + *(p + 1) - '0' - 1 + 'A'; // 문자로 치환
					// 뒤로 밀기
					for (q = C + len; p + 1 < q; q--) *(q + N - 2) = *q;
					for (int i = 0; i < N; i++) *(p + i) = ch;
				}

				else {
					char ch = (*p - '0' - 1) + 'A'; // 문자로 치환
					// 뒤로 밀기
					for (q = C + len; p < q; q--) *(q + N - 1) = *q;
					for (int i = 0; i < N; i++) *(p + i) = ch;
				}
				p += N - 1;
			}
			else *p = ' ';
		}

		if (strcmp(C, B) == 0) {
			flag = 1;
			printf("1\n");
		}

		N++;
	}
	
	N = 0;
	while (N < 11) {

		strcpy(C, B);
		len = strlen(C);

		for (p = C; p < C + 20 && *p != '\0'; p++) {

			if ('A' <= *p && *p <= 'Z') {
				*p += N;
			}
			else if ('a' <= *p && *p <= 'z') {
				*p -= N;
			}
			else if ('0' <= *p && *p <= '9') {



				// 두 자리수일 경우
				if ('0' <= *(p + 1) && *(p + 1) <= '9') {
					char ch = (*p - '0') * 10 + *(p + 1) - '0' - 1 + 'A'; // 문자로 치환
					// 뒤로 밀기
					for (q = C + len; p + 1 < q; q--) *(q + N - 2) = *q;
					for (int i = 0; i < N; i++) *(p + i) = ch;
				}

				else {
					char ch = (*p - '0' - 1) + 'A'; // 문자로 치환
					// 뒤로 밀기
					for (q = C + len; p < q; q--) *(q + N - 1) = *q;
					for (int i = 0; i < N; i++) *(p + i) = ch;
				}
				p += N - 1;
			}
			else *p = ' ';
		}

		if (strcmp(C, A) == 0) {
			flag = 1;
			printf("2\n");
		}
		N++;
	}
	
	if (flag == 0) {
		printf("0\n");
	}
}