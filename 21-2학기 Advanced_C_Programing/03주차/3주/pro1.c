#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	char *i, ch[20];

	scanf("%s", ch);

	for (i = ch; *i != '\0'; i++) {
		if ('a' <= *i && *i <= 'z') {
			printf("%c", *i);
		}
	}
}