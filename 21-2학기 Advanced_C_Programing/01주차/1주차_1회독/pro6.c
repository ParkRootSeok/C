#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int flag, cnt, maxn;
	char str[11], *p, *q, maxc;

	gets(str);

	flag = 0;
	for (p = str; *p != '\0' ; p++) {

		cnt = 0; // 카운트 초기화

		for (q = str; *q != '\0' ; q++)	{

			// 같은 문자일시 카운트
			if (*p == *q) cnt++;
		}

		// 기준값 설정
		if (flag == 0) {
			maxn = cnt;
			maxc = *p;
			flag = 1;
		}
		
		if (maxn < cnt) {
			maxn = cnt;
			maxc = *p;
		}
	}

	printf("%c %d", maxc, maxn);
	
}