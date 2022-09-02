#include <stdio.h>
#pragma warning(disable:4996)

struct Time {
	int h;
	int m;
	int s;
} T;


int main() {
	struct Time t1;
	struct Time t2;
	struct Time t3;

	scanf("%d %d %d", &t1.h, &t1.m, &t1.s);
	scanf("%d %d %d", &t2.h, &t2.m, &t2.s);
	
	// 시차 구하기
	t3.h = t2.h - t1.h;

	t3.m = t2.m - t1.m;
	if (t3.m < 0) {
		t3.m = 60 + t3.m;
		t3.h--;
	}

	t3.s = t2.s - t1.s;
	if (t3.s < 0) {
		t3.s = 60 + t3.s;
		t3.m--;
	}

	//출력
	printf("%d %d %d", t3.h, t3.m, t3.s);
}