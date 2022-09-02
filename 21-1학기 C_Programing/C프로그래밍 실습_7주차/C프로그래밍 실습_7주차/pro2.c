#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, N, cnt;
	char ch[7];

	cnt = N = 0;

	for (i = 0; i < 7; i++)
	{
		scanf("%c", &ch[i]);
		N++;
	}

	for (i = 0; i < N - 2; i++)
	{
		if (ch[i] == 'c' && ch[i + 1] == 'a' && ch[i + 2] == 't')  cnt++;		
	}

	printf("%d", cnt);
	return 0;
}