#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char ch1, ch2, res, c;
	int a, b;
	scanf("%c-%c", &ch1, &ch2);

	a = ch1 - 'A'; 
	b = ch2 - 'a';

	res = b >= a ? ch1 : ch2; 

	printf("%c", res);

	return 0;

}