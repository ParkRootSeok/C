#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	int i, j, len1, len2, flag, cnt = 0;
	char str1[80], str2[100];

	gets(str1);
	gets(str2);
	len1 = strlen(str1);
	len2 = strlen(str2);

	
	
	for (i = 0; i < len1 - len2 + 1; i++) {
		
		flag = 0;

		for (j = 0; j < len2; j++) {

			if (str1[i + j] != str2[j]) {
				flag = 1;
			}
		}

		if (flag == 0) {
			cnt++;
			i += len2 - 1;
		}
	}

	printf("%d",cnt);
}