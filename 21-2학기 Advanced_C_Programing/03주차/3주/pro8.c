#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	char* i, * j;
	char str1[50], str2[50];

	scanf("%s", str1);
	scanf("%s", str2);

	for (i = str1, j = str2; *i != '\0' && *j != '\0'; i++, j++) {
		if (*i > *j) {
			printf("%s%s", str1, str2); break;
		}
		else if (*i < * j) {
			printf("%s%s", str2, str1); break;
		}
		else continue;
	}
}