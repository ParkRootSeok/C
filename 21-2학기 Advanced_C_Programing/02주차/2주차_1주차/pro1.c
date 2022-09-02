#include <Stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {

	char str[20];

	gets(str);

	for (int i = 0; i < 20 && *(str + i) != '\0'; i++) {

		if ('a' <= *(str + i) && *(str + i) <= 'z') {
			printf("%c", *(str + i));
		}

	}

}


