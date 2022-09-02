#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n,s ;
	scanf("%d", &n);
	
	s = (20 <= n && n <= 30);

	printf("%d", s);

	return 0;
}