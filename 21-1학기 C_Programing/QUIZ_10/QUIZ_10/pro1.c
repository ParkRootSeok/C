#include <stdio.h>
#pragma warning(disable:4996)

int main() 
{
	int i, j;
	int n, ko, ma, en, rank;
	double tmp2, scr[100];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d", &ko, &en, &ma);
		scr[i] = (ko + en + ma) / 3.0;
	}


	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i ; j++)
		{
			if (scr[j] < scr[j + 1])
			{
				tmp2 = scr[j + 1];
				scr[j + 1] = scr[j];
				scr[j] = tmp2;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		rank = 0;
		for (j = 0; j < i; j++)
		{
			if (scr[i] < scr[j]) rank++;
		}

		printf("%d %.2f\n", rank + 1, scr[i]);
	}

}