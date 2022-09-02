#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	int cnt = 0;
	char x[101] = { 0 }, y[50][101] = { 0 }, tmp[101] = { 0 }, * p, * q;

	gets(x);

	q = x;
	for (p = x; ; p++) {

		if (*p == ' ') {
			*p = '\0';
			strcpy(y[cnt++], q);
			q = p + 1;
		}
		else if (*p == 0) {
			*p = '\0';
			strcpy(y[cnt++], q);
			q = p + 1;
			break;
		}
	}

	for (int i = 0; i < cnt - 1; i++) {
		for (int j = i + 1; j < cnt; j++) {

			if (strcmp(y + i, y + j) > 0) {
				strcpy(tmp, y + i);
				strcpy(y + i, y + j);
				strcpy(y + j, tmp);
			}


		}
	}


	for (int i = 0; i < cnt + 1; i++) {
		puts(y[i]);
	}


}