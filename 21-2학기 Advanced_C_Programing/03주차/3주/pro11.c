#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char *i, *j, flag, chk;
	char str1[80], str2[10];

	scanf("%s", str1);
	scanf("%s", str2);

	flag = chk = 0;
	for (i = str2; i < str2 + strlen(str2); i++) {

		for (j = str1; j < str1 + strlen(str1);j++) {
	
			if (*i == *j) {
				flag++;
				break;
			}
		}

		if (flag == strlen(str2)) {
			chk = 1;

			printf("%d %d", strlen(str1), chk);
			return 0;
		}
	}
	
	printf("%d %d", strlen(str1), chk);

}