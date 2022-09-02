#include <stdio.h>
#pragma warning(disable:4996)

int max1, max2;
void update_max1(int x);

int main()
{
	int N, N1, N2;
	scanf("%d %d", &N1, &N2);

	N1 >= N2 ? (max1 = N1, max2 = N2) : (max1 = N2, max2 = N1);

	scanf("%d", &N);
	while (N != 0)
	{
		update_max1(N);
		scanf("%d", &N);
	}
	
	printf("%d %d", max1, max2);

	return 0;
}

void update_max1(int x) {
	if (max1 <= x) {
		max2 = max1;
		max1 = x;
	}
	else if (max2 <= x) max2 = x;
}