#include <stdio.h>
#pragma warning(disable:4996)
char atoA(char);

int main()
{
	int i;
	char ch[10];

	for (i = 0; i < 10; i++)
	{
		scanf("%c", &ch[i]);
	}

	for (i = 0; i < 10; i++)
	{
		printf("%c", atoA(ch[i]));
	}
}

char atoA(char ch)
{
	return ch - ('a' - 'A');
}