#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n1, n2, n3, n4;
	int tmp1;

	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

	if (n1 > n2) // DOWN

		if (n2 > n3) // DOWN
		{
			if (n3 > n4) // DOWN
				printf("DOWN DOWN DOWN");

			else if (n3 < n4) // UP
				printf("DOWN DOWN UP");

			else printf("DOWN DOWN"); // n3 == n4
		}

		else if (n2 < n3) // UP
		{
			if (n3 > n4) // DOWN
				printf("DOWN UP DOWN");

			else if (n3 < n4) // UP
				printf("DOWN UP UP");

			else printf("DOWN UP"); // n3 == n4
		}

		else // n2 == n3 
		{
			if (n3 > n4) // DOWN
				printf("DOWN DOWN");

			else if (n3 < n4) // UP
				printf("DOWN UP");

			else printf("DOWN"); // n3 == n4
		}

	else if(n1 < n2) // UP
	{
		if (n2 > n3) // DOWN
		{
			if (n3 > n4) // DOWN
				printf("UP DOWN DOWN");

			else if (n3 < n4) // UP
				printf("UP DOWN UP");

			else printf("UP DOWN"); // n3 == n4
		}

		else if (n2 < n3) // UP
		{
			if (n3 > n4) // DOWN
				printf("UP UP DOWN");

			else if (n3 < n4) // UP
				printf("UP UP UP");

			else printf("UP UP"); // n3 == n4
		}

		else // n2 == n3 
		{
			if (n3 > n4) // DOWN
				printf("UP DOWN");

			else if (n3 < n4) // UP
				printf("UP UP");

			else printf("UP"); // n3 == n4
		}
	}

	else // n1 == n2
	{
		if (n2 > n3) // DOWN
		{
			if (n3 > n4) // DOWN
				printf("DOWN DOWN");

			else if (n3 < n4) // UP
				printf("DOWN UP");

			else printf("DOWN"); // n3 == n4
		}

		else if (n2 < n3) // UP
		{
			if (n3 > n4) // DOWN
				printf("UP DOWN");

			else if (n3 < n4) // UP
				printf("UP UP");

			else printf("UP"); // n3 == n4
		}

		else // n2 == n3 
		{
			if (n3 > n4) // DOWN
				printf("DOWN");

			else if (n3 < n4) // UP
				printf("UP");

			else printf("NONE"); // n3 == n4
		}
	}
}
