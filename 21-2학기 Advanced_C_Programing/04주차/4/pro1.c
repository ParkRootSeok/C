#include <stdio.h>
#pragma warning(disable:4996)

struct Vector {
	int x;
	int y;
	int z;
} vc;


int main() {
	struct Vector vc1;
	struct Vector vc2;
	struct Vector vc3;

	int Inp;

	scanf("%d %d %d", &vc1.x, &vc1.y, &vc1.z);
	scanf("%d %d %d", &vc2.x, &vc2.y, &vc2.z);
	
	// 원소별 곱
	vc3.x = vc1.x * vc2.x;
	vc3.y = vc1.y * vc2.y;
	vc3.z = vc1.z * vc2.z;

	// 내적
	Inp = vc3.x + vc3.y + vc3.z;
	

	printf("%d %d %d\n", vc3.x, vc3.y, vc3.z);
	printf("%d\n", Inp);
}