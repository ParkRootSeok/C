#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int num, res;
	char ch[9], *i = ch;

	scanf("%d", &num);

	while (num > 0) {
		res = num % 10;
		num /= 10;

		*i = res + '0';
		i++;

		*(i + 1) = '\0';
	}
	
	printf("%s", ch);
}
