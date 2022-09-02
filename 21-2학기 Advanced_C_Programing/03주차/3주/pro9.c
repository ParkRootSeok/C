#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int check(char* str);


int main() {
	int len,  chk;
	char *i, str[30];

	scanf("%s", str);
	len = strlen(str);
	chk = check(str);

	printf("%d %d", len, chk);
	
}

int check(char* str) {
	char *i, * j;
	int len = strlen(str);

	for (i = str, j = str + len - 1; i < str + (len / 2); i++, j--) {
		if (*i != *j) return 0;
	}

	return 1;
}