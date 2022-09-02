#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {

	char str1[50], str2[50];
	gets(str1);
	gets(str2);

	if (strcmp(str1, str2) < 0) {
		strcat(str2, str1);
		puts(str2);
	}
	else {
		strcat(str1, str2);
		puts(str1);
	}
}