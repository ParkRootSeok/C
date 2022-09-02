#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int N, len1 = 0, len2 = 0, alt;
	char *i, * j;
	char str1[42], str2[21];

	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%d", &N); // 삽입 위치
	scanf("%d", &alt);

	for (i = str1; *i != '\0'; i++) {
		len1++;
	}

	for (i = str2; *i != '\0'; i++) {
		len2++;
	}

	for (i = str1 + len1 + len2, j = str1 + len1; str1 + N <= j; i--, j--) {
			*i = *j;
	}
	
	if (alt == 0) { // 정순	
		for (i = str1 + N, j = str2; *j != '\0'; i++, j++) {
			*i = *j;
		}
	} else {
		for (i = str1 + N , j = str2 + len2 - 1 ; str2 <= j; i++, j--) {
			*i = *j;
		}
	}

	*(str1 + len1 + len2  + 1) = '\0';
	printf("%s", str1);
}