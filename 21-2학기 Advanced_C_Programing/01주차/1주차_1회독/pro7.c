#include <stdio.h>
#pragma warning(disable:4996)

void input(int* px, int* py, int* pz);
void output(int* px, int* py, int* pz);

int main() {
	int x, y, z;
	int *px = &x, * py = &y, * pz = &z;

	input(px, py, pz);
	output(px, py, pz);
}

void input(int* px, int* py, int* pz) {
	
	scanf("%d %d %d", px, py, pz);

}

void output(int* px, int* py, int* pz) {

	printf("%d %d %d", *px, *py, *pz);

}
