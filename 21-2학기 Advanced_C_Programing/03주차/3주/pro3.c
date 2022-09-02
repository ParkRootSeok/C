#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int len = 0, i, j;
	char tmp, str[100];

	scanf("%s", str);

	for (char *i = str; *i != '\0'; i++) {
		len++;
	}

	for (i = 0; i < len ; i++) {
		
		printf("%s \n", str);

		tmp = str[0];
		for (j = 0; j < len - 1; j++) {
			str[j] = str[j + 1];
		}
		str[len - 1] = tmp;
	}
}