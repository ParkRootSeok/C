#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, N;
	char ch, x[100], y[100];

	scanf("%c", &ch);
	for (i = 0; 'a' <= ch && ch <= 'z'; i++)
	{
		x[i] = ch;
		scanf("%c", &ch);
	}
	getchar();

	scanf("%c", &ch);
	for (i = 0; 'a' <= ch && ch <= 'z'; i++)
	{
		y[i] = ch;
		scanf("%c", &ch);
	}
	getchar();
	
	N = i;
	for (i = 0; i < N; i++)
	{
		printf("%c%c", x[i], y[i]);
	}
	
}