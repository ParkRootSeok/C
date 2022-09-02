#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	int len1, len2, cnt = 0;
	char *p, str1[100], str2[100];

	gets(str1);
	gets(str2);

	len1 = strlen(str1);
	len2 = strlen(str2);
	for (p = str1; p < str1 + len1; p++) {


		if (len1 == len2) {

			if (strncmp(p, str2, len2) == 0) {
				cnt++;
			}
		}
		else {

			if (strncmp(p, str2, len2) == 0
				&& !('a' <= *(p - 1) && *(p - 1) <= 'z' || 'A' <= *(p - 1) && *(p - 1) <= 'Z')
				&& !('a' <= *(p + len2) && *(p + len2) <= 'z' || 'A' <= *(p + len2) && *(p + len2) <= 'Z')) {
				cnt++;
			}

		}
	}

	printf("%d", cnt);
}