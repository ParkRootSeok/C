#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int flag, cnt, maxn;
	char str[11], *p, *q, maxc;

	gets(str);

	flag = 0;
	for (p = str; *p != '\0' ; p++) {

		cnt = 0; // ī��Ʈ �ʱ�ȭ

		for (q = str; *q != '\0' ; q++)	{

			// ���� �����Ͻ� ī��Ʈ
			if (*p == *q) cnt++;
		}

		// ���ذ� ����
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