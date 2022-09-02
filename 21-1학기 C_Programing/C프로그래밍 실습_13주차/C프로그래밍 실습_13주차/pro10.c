#include <stdio.h>
#pragma warning(disable:4996)
int N;

void die1(int x);
void die2(int x, int y);
void die3(int x, int y, int z);

int main() {
	save_N(); // 정수 저장

	for (int i = 1; i <= 6; i++)
	{
		die1(i);
	}
}

int save_N() {
	scanf("%d", &N);
}

void die1(int x) {
	int i;

	for ( i = 1; i <= 6; i++)
	{

		die2(x, i);
	}
}
void die2(int x, int y) {
	int i;

	for (i = 1; i <= 6; i++)
	{
		die3(x, y, i);
	}
	
}
void die3(int x, int y, int z) {

	if (N == (x + y + z))  printf("%d %d %d\n", x, y, z);
}