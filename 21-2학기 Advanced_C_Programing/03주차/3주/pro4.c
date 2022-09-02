#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int str1len, flag;
	char *i, * j;
	char str1[100], str2[100];

	scanf("%s", str1);
	scanf("%s", str2);
	
	
	flag = 0;
	str1len = 0;
	for (i = str1, j = str2; *i != '\0'; i++, j++) {		
		
		str1len++;

		if (*i == *j) flag += 1;
	
	}

	if (flag == str1len) {
		printf("%d 1\n", str1len);
	}
	else {
		printf("%d 0\n", str1len);
	}

}