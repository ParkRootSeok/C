#include <stdio.h>
#pragma warning(disable:4996)

int a1, a2, a3;

int generate_num();
int count_strike(int n1, int n2, int n3);
int count_ball(int n1, int n2, int n3);

int main() {
	int g1, g2, g3, S, B;
	
	generate_num(); // 정답 입력

	while (1)
	{
		scanf("%d %d %d", &g1, &g2, &g3); // 정답 추측

		S = count_strike(g1, g2, g3);
		B = count_ball(g1, g2, g3);

		printf("%dS%dB\n", S, B);

		if (S == 3) break;
	}
}

int generate_num() {
	scanf("%d %d %d", &a1, &a2, &a3);
}

int count_strike(int n1, int n2, int n3) {
	int s = 0;

	if (n1 == a1) s++;
	if (n2 == a2) s++;
	if (n3 == a3) s++;

	return s;
}

int count_ball(int n1, int n2, int n3) {
	int b = 0;

	if (n1 == a2 || n1 == a3) b++;
	if (n2 == a1 || n2 == a3) b++;
	if (n3 == a1 || n3 == a2) b++;

	return b;
}