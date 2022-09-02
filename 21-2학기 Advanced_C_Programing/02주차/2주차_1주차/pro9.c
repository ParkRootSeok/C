#include <stdio.h>
#pragma warning(disable:4996)

int check(char* pch);

int main() {
	int len;
	char str[30];

	gets(str);
	len = strlen(str);
	
	printf("%d %d", len, check(str));
}

int check(char* pch) {

	for (int i = 0; i <= strlen(pch) / 2; i++) {
		if (*(pch + i) != *(pch + strlen(pch) - i - 1)) {
			return 0;
		}
	}
	return 1;

}