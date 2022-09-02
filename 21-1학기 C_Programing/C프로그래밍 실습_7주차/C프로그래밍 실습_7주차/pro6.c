#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, k, flag;
	char ans, ch1[3], ch2[3] = { '_', '_', '_' };

	for (i = 0; i < 3; i++)
	{
		scanf("%c", &ch1[i]);
	}
	getchar();

	flag = 1;
	for (i = 0; i < 5 && flag != 0; i++)
	{
		scanf("%c", &ans);
		getchar();

		for (j = 0; j < 3; j++)
		{
			if (ch1[j] == ans)
			{
				ch2[j] = ans;
			}
			printf(" %c", ch2[j]);
		}
		printf("\n");

		flag = 0;
		for (k = 0; k < 3; k++)
		{
			if (ch1[k] != ch2[k]) flag = 1;
		}
	}


}