#include <stdio.h>
#pragma warning(disable:4996)

/*
int main() {
	char a[5] = { 'a','b','c','d','e' }, b[5] = { 'A','B','C','D','E' }, c[10];
	char *p1 = a, *p2 = b, *p3 = c;
	int i;
	
	for (p1 = a; p1 < a + 5; p1++, p3++) {
		*p3 = *p1;
	}
	for (p2 = b; p2 < b + 5; p2++, p3++) {
		*p3 = *p2;
	}
	for (p3 = c; p3 < c + 10; p3++) {
		printf("%c ", *p3);
	}

	for (i = 0; i < 5; i++) {
		*(p3 + i) = *(p1 + i);
	}
	for (i = 0; i < 5; i++) {
		*(p3 + i + 5) = *(p2 + i);
	}
	for (i = 0; i < 10; i++) {
		printf("%c ", *(p3 + i));
	}
	
	for (i = 0; i < 5; i++) {
		c[i] = a[i];
	}
	for (i = 0; i < 5; i++) {
		c[i + 5] = b[i];
	}
	for (i = 0; i < 10; i++) {
		printf("%c ", c[i]);
	}
}
*/

int main() {
	int x[5], rank[5] = { 0 }, *p, *r, *q;

	for (p = x; p < x + 5; p++) {
		scanf("%d", p);
	}

	for (p = x, r = rank; p < x + 5 ; p++, r++) {
		for (q = x; q < x + 5; q++) {
			if (*p < *q) {
				(*r)++;
			}
		}
	}

	for (p = x, r = rank; p < x+ 5;p++, r++) {
		printf("%d=r%d ", *p, *r + 1);
	}
}
