#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char ch[5];
	int i, j, k;
	for (i = 0; i < 5; i++) 
	{
		scanf("%c", &ch[i]);
	}
	for (i = 0; i < 5; i++) 
	{
		for (j = 0; j < 5; j++) 
		{
			printf("%c", ch[(5  - i + j) % 5]);
		}
		printf("\n");
	}
	return 0;
}
