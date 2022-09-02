#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N, M, f1, f2, s1, s2;
	scanf("%d %d", &N, &M);

	f1 = N / M, f2 = N % M; // N이 큰 경우
	s1 = M / N, s2 = M % N; // M이 큰 경우 
	
	if (N > M)
		printf("%d\n%d", f1, f2);
	else
		printf("%d\n%d", s1, s2);
}
