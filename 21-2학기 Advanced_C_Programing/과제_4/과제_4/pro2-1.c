#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {

	char x[100], * tmp, ** words;
	int start = 0, end = 0, xlen, space = 0;

	gets(x);
	xlen = strlen(x);
	tmp = x;

	// 단어 갯수 구하기
	for (int i = 0; i < xlen; i++) if (x[i] == ' ') space++;
	space += 1;

	// 동적할당
	words = (char**)malloc(space * sizeof(char*));


	int k = 0;
	for (int i = 0; i <= xlen; i++) {

		if (x[i] == ' ' || x[i] == NULL) {

			end = i;

			// 단어 크기만큼 동적할당
			words[k] = (char*)malloc((end - start + 1) * sizeof(char));

			strncpy(words[k], tmp, end - start);	// 문자열 복사
			words[k++][end - start] = NULL;		// 문자열 끝

			tmp += end - start + 1; // 위치 이동
			start = end + 1;
		}
	}


	for (int i = 0; i < space; i++) {

		for (int j = 0; j < space - i - 1; j++) {

			char temp[100];

			// 단어 길이순 정렬
			if (strlen(words[j]) < strlen(words[j + 1])) {
				strcpy(temp, words[j]);
				strcpy(words[j], words[j + 1]);
				strcpy(words[j + 1], temp);
			}

			// 같으면 사전순으로 정렬
			else if (strlen(words[j]) == strlen(words[j + 1])
				&& strcmp(words[j], words[j + 1]) > 0) {
				strcpy(temp, words[j]);
				strcpy(words[j], words[j + 1]);
				strcpy(words[j + 1], temp);
			}

		}
	}


	for (int i = 0; i < space; i++) {
		puts(words[i]);
	}


}
