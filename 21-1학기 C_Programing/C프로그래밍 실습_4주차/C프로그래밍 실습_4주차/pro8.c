#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N;
	scanf("%d", &N);

	if (N % 2 == 0)
		printf("even");
	else
		printf("odd");
	
	return 0;
}