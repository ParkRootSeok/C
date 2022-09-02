#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	int N, minlen;
	char *i, *j, str[101], min[101];
	scanf("%d", &N);
	getchar();

	minlen = 102;
	for (i = 0; i < N; i++) {

		gets(str);
		
		if (strlen(str) < minlen) {
			minlen = strlen(str);
			strcpy(min, str);
		}
	}

	printf("%s", min);

}