#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, k, flag, cnt;
	char ch[10];

	for (i = 0; i < 10; i++)
	{
		scanf("%c", &ch[i]);
	}

	k = 0;
	for (i = 0; i < 10; i++)
	{
		cnt = 0;
		for(j = 0; j < 10; j++)
		{
			if (ch[i] == ch[j] && i != j) cnt++;
		}

		if (cnt == 0) printf(" %c", ch[i]);

	}

}