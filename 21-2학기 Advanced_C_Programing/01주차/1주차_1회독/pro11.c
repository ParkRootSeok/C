#include <stdio.h>
#pragma warning(disable:4996)

void strcopy(int a[], int b[]);

int main() {
	int i;
	char *pch, a[6], b[6];

	for (pch = a; pch < a + 6; pch++) {
		scanf("%c", pch);
	}
	strcopy(a, b);
	
	for (pch = b; pch < b + 6; pch++) {
		printf("%c", *pch);
	}

}

void strcopy(int a[], int b[]) {
	int i;

	for (i = 0; i < 6; i++)	{
		*(b + i) = *(a + i);
	}
}