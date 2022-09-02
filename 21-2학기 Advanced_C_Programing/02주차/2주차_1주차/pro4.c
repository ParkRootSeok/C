#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int i, len1, flag = 1;
	char str1[100], str2[100];

	gets(str1);
	gets(str2);

	for (i = 0; str1[i] != '\0'; i++) len1 = i;
	len1 += 1;

	for (i = 0; i < len1; i++) {
		if (str1[i] != str2[i]) flag = 0;
	}


	if (flag) printf("%d %d", len1, flag);
	else printf("%d %d", len1, flag);
	
	
}