#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int x, y, z;
	int *px = &x, *py = &y, * pz = &z, *tmp;

	scanf("%d %d %d", &px, &py, &pz);

	tmp = pz;
	pz = py;
	py = px;
	px = tmp;

	printf("%d %d %d", px, py, pz);
}