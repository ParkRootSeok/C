#include <stdio.h>
#pragma warning(disable:4996)

void Read(char* c, int N);
void check(char* c1, char* c2, char ch);
void Write(char *c, int N);

int main() {
	int N, M;
	char ch, x[100], y[100];
	scanf("%d %d", &N, &M);
	getchar();

	for (int i = 0; i < N; i++) {
		y[i] = '_';
	}

	Read(x, N);
	getchar();

	for (int i = 0; i < M; i++) {
		scanf("%c", &ch);
		getchar();
		check(x, y, ch);
		Write(y, N);
	}

	return 0;

}

void Read(char* c, int N) {
	char* p;

	for (p = c; p < c + N; p++) scanf("%c", p);
	*p = 0;
}

void check(char* c1, char* c2, char ch) {

	char* p1, * p2;

	for (p1 = c1, p2 = c2; *p1 != 0 ; p1++, p2++) {
		if (*p1 == ch) *p2 = ch;
	}

}

void Write(char *c, int N) {
	char* p;
	for (p = c; p < c + N; p++) printf(" %c", *p);
	printf("\n");
}