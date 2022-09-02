#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, j, n;
	char x[6][5] = { {'Z', 'E', 'R', 'O', '-'}, {'O', 'N', 'E', '-', '-' }, 
					{'T', 'W', 'O', '-', '-'}, {'T', 'H', 'R', 'E', 'E'}, 
					{'F', 'O', 'U', 'R', '-' }, {'F', 'I', 'V', 'E', '-'} };


	for (i = 0; i < 3; i++)
	{
		scanf("%d", &n);

		for (j = 0; j < 5; j++)
		{
			printf("%c", x[n][j]);
		}
		printf("\n");
	}

}
