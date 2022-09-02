#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	int i, j, len;
	char tmp, str[100];

	gets(str);
	len = strlen(str);
	for (i = 0; i < len; i++) {
			
		printf("%s\n", str);

		tmp = str[0];
		for (j = 0; j < len - 1; j++) {
			str[j] = str[j + 1];
		}
		str[len - 1] = tmp;
	
	}
}