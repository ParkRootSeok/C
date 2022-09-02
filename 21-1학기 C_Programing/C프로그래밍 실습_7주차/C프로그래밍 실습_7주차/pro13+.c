#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j;
	char x[10];

	for (i = 0; i < 10; i++)
	{
		scanf("%c", &x [i]);
	}


	for (i = 0; i < 10; i++)
	{
		if ('A' <= x[i] && x[i] <= 'Z')
		{
			printf(" %c", x[i]);
		}
		
	}
}