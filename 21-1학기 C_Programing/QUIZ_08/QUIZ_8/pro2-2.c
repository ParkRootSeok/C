#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	char ch, x[100], y[100];
	int Nx, Ny, i;

	scanf("%c", &ch);
	for (i = 0;'a' <= ch && ch <= 'z'; i++)
	{
		x[i] = ch;
		scanf("%c", &ch);
	}
	Nx = i;
	getchar();

	scanf("%c", &ch);
	for (i = 0; 'a' <= ch && ch <= 'z'; i++)
	{
		y[i] = ch;
		scanf("%c", &ch);
	}
	Ny = i;
	getchar();

	for (i = 0; i  < Nx && i < Ny; i++)
	{
		printf("%c%c", x[i], y[i]);
	}
	
	if (Nx > Ny)
	{
		for (i = Ny;i < Nx; i++)
		{
			printf("%c", x[i]);
		}
	}
	else
	{
		for (i = Nx;i < Ny; i++)
		{
			printf("%c", y[i]);
		}
	}
}