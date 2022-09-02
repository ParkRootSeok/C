#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int i, Nx;
	char x[20], *px;

	px = x;

	i = 0;
	scanf("%c", px);
	while (*(px + i) != '#') {
		i++;
		scanf("%c", px + i);
	}
	Nx = i;

	for (i =Nx - 1; 0 <= i; i--) {
		printf("%c", *(px + i));
	}
}