#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int x[3] = {0}, tmp, med;
	int *px, *i, *j;

	for (px = x; px < x + 3; px++) {
		scanf("%d", px);
	}
	px = x;
	if (*px < *(px+1) && *px > *(px+2) || *px > *(px + 1) && *px < *(px + 2)) {
		med = *px;
	}
	else if (*px < *(px + 1) && *(px+1) < *(px + 2) || *px < * (px + 1) && *(px+1) > *(px + 2)) {
		med = *(px + 1);
	}
	else
	{
		med = *(px + 2);
	}

	printf("%d", med);


	/*
	for (i = px; i < px + 3; i++)
	{
		for (j = px; j < px + 2; j++)
		{
			if (*(j) > * (j + 1)) {
				tmp = *(j);
				*j = *(j + 1);
				*(j + 1) = tmp;
			}
		}
	}
	*/

	//printf("%d", *(px + 1));
}