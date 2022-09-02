#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int i, Nx, Ny, N, flag, flag_x, flag_y, flag_e;
	int x[20], y[20];

	i = 0;
	scanf("%d", &x[i]);
	while (x[i] > 0)
	{
		i++;
		scanf("%d", &x[i]);
	}
	Nx = i;

	i = 0;
	scanf("%d", &y[i]);
	while (y[i] > 0)
	{
		i++;
		scanf("%d", &y[i]);
	}
	Ny = i;

	

	flag = 0;
	for (i = 0; i < Nx && i < Ny; i++)
	{
		if (x[i] < y[i])
		{
			flag = 1;
			break;
		}
		else if (x[i] > y[i])
		{
			flag = 2;
			break;
		}
	}

	if (flag == 1 || flag == 0 && Nx <= Ny)
	{
		for (i = 0; i < Nx; i++)
		{
			printf("%d ", x[i]);
		}
	}
	
	else
	{
		for (i = 0; i < Ny; i++)
		{
			printf("%d ", y[i]);
		}
	}


}