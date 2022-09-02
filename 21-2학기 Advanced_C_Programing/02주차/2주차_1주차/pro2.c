#include <stdio.h>
#pragma warning(disable:4996)

int main() {

	int N, i;
	char ch[9], res;


	scanf("%d", &N);

	i = 0;
	while (N > 0) {

		res = (N % 10) + '0';
		N /= 10;
		
		ch[i++] = res;
	}
	ch[i] = '\0';

	puts(ch);
}