#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	int i, j, k, cnt, n;
	char* pstr, str[100][100], tmp[100];

	gets(tmp);
	scanf("%d", &n);
	// 단어 갯수 확인
	cnt = 0;
	for (pstr = tmp; pstr < tmp + strlen(tmp); pstr++) {
		if (*pstr == ' ') cnt++;
	}
	cnt += 1;

	// 단어 단위로 분리
	i = 0;
	pstr = tmp;
	for (k = 0; k < cnt; k++) {
		j = 0;
		for (; *pstr != ' ' && pstr < tmp + strlen(tmp); pstr++) str[i][j++] = *pstr;

		str[i++][j] = '\0';
		pstr++;

	}
	puts(str[n - 1]);

	// 오름차순 정렬
	for (i = 0; i < cnt - 1; i++) {
		for (j = 0; j < cnt; j++) {
			if (strcmp(str + j, str + (j + 1)) >= 0) {
				strcpy(tmp, str + j);
				strcpy(str + j, str + (j + 1));
				strcpy(str + (j + 1), tmp);
			}
		}
	}

	puts(str);
	return 0;
}