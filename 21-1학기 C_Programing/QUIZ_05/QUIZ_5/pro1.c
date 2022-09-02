#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int y1, m1, d1;
	int y2, m2, d2;
	int temp = 0;

	scanf("%d/%d/%d", &y1, &m1, &d1);
	scanf("%d/%d/%d", &y2, &m2, &d2);
	
	if (y1 < y2)
	{
		printf("%d/%02d/%02d", y1, m1, d1);
		temp = 1;
	}
	else if (y1 > y2)
	{
		printf("%d/%02d/%02d", y2, m2, d2);
		temp = 1;
	}

	else if (m1 < m2)
	{
		printf("%d/%02d/%02d", y1, m1, d1);
		temp = 1;
	}
	else if (m1 > m2)
	{
		printf("%d/%02d/%02d", y2, m2, d2);
		temp = 1;
	}

	else if (d1 < d2)
	{
		printf("%d/%02d/%02d", y1, m1, d1);
		temp = 1;
	}
	else if (d1 > d2)
	{
		printf("%d/%02d/%02d", y2, m2, d2);
		temp = 1;
	}

	if (temp == 0)
	{
		printf("%d/%02d/%02d*", y1, m1, d1);
	}
}