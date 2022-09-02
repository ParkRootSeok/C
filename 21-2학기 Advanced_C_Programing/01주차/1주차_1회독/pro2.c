#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int cnt = 0;
	char str[20], *pstr = &str, *i;

	gets(str);

	for (i = str; *i != '#' ; i++) cnt++;

	for (int i = cnt - 1; 0 <= i; i--) {
		printf("%c", *(pstr + i));
	}
}