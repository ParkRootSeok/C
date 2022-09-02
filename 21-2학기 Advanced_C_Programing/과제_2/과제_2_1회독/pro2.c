#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	
	int i, j, k, cnt;
	char *pstr, word[100][100], str[100];

	gets(str);

	// 단어 갯수 확인
	cnt = 0;
	for (pstr = str; pstr < str + strlen(str); pstr++) {
		if (*pstr == ' ') cnt++;
	}
	cnt += 1;

	// 단어 단위로 분리
	i = 0;
	pstr = str;
	for (k = 0; k < cnt; k++) {
		j = 0;
		for (; *pstr != ' ' && pstr < str + strlen(str); pstr++) word[i][j++] = *pstr;

		word[i++][j] = '\0';
		pstr++;
	}

	for (i = 0; i < cnt; i++) puts(word[i]);

	for (i = 0; i < cnt - 1; i++) {
		for (j = 0; j < cnt; j++) {
			if (strcmp(word + j, word + j + 1) >= 0) {
				strcpy(str, word + j);
				strcpy(word + j, word + j + 1);
				strcpy(word + j + 1, str);
			}
		}
	}

	puts(word);
	return 0;

}