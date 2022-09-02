#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int N;

	scanf("%d", &N);
	
	if (N < 0) 
		printf("cold, indoor");

	else if (N < 40) 
		printf("moderate, outdoor");

	else printf("hot, indoor");

	return 0;
}	
