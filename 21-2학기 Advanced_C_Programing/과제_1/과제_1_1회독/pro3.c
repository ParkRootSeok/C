#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int max, cnt, flag;
	char str[100], ch, *p;

	for (p = str; ; p++) {
		scanf("%c", p);
		if (*p == '#') {
			*(p + 1) = '\0';
			break;
		}
	}
	p = str;

	max = cnt = flag = 0;
	while (*p != '\0') {
		
		cnt = flag = 0;

		while ('a' <= *p && *p <= 'z') {
			flag = 1;
			printf("%c", *p);
			
			cnt++;
			p++;
		}

		if (flag == 1) printf("\n");

		if (max < cnt) {
			max = cnt;
		}

		p++;
	}

	printf("%d", max);


}