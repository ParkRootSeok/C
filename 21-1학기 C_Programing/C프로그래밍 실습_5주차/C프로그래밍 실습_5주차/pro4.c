#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n1, n2, n3;
	int tmp1, tmp2, tmp3;

	scanf("%d %d %d", &n1, &n2, &n3);
	
	tmp1 = n1 > n2&& n1 > n3;  // M : n1
	tmp2 = n2 > n1&& n2 > n3;  // M : n2
	tmp3 = n3 > n1&& n3 > n2;  // M : n3
	
	if (tmp1 == 1)	{
		if (n2 > n3) // m : n2
		{
			printf("%d %d", n1, n3);
		}
		else // m : n3
		{
			printf("%d %d", n1, n2);
		}
	}
	else if (tmp2 == 1)	{
		if (n1 > n3)
		{
			printf("%d %d", n2, n3);
		}
		else
		{
			printf("%d %d", n2, n1);
		}
	}
	else if (tmp3 == 1)	{
		if (n1 > n2)
		{
			printf("%d %d", n3, n2);
		}
		else
		{
			printf("%d %d", n3, n1);
		}
	}
	else	{
		printf("NONE");
	}
	return 0;
}