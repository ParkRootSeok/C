#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	int i, pos, len1, len2;
	char str1[42], str2[20];


	gets(str1);
	gets(str2);
	scanf("%d", &pos);

	len1 = strlen(str1);
	len2 = strlen(str2);


	for (i = 0; i <= len1 - pos; i++) {
		str1[len1 + len2 - i] = str1[len1 - i];
	}

	for (i = 0; i < len2; i++) {
		str1[pos + i] = str2[i];
	}
	str1[len1 + len2 + 1] = '\0';
	puts(str1);

}