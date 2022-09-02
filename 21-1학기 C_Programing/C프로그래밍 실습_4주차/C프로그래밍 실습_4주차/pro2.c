#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int sec, h, m;
	scanf("%d", &sec);

	h = sec / 3600;
	sec %= 3600;
	m = sec / 60;
	sec %= 60;

	printf("%02d:%02d:%02d", h, m, sec);

	return 0;
}