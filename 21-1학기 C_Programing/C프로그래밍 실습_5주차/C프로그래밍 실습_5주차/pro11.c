#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int m1, m2, m3, g1, g2, g3, S=0, B=0 ;

	scanf("%d %d %d", &m1, &m2, &m3);
	scanf("%d %d %d", &g1, &g2, &g3);

	if (m1 == g2 || m1 == g3)
		B++;
	if (m2 == g1 || m2 == g3)
		B++;
	if (m3 == g1 || m3 == g2)
		B++;
	if (m1 == g1)
		S++;
	if (m2 == g2)
		S++;
	if (m3 == g3)
		S++;
	
	printf("%dS%dB", S, B);
}
