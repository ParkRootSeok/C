#include<stdio.h>
#pragma warning(disable:4996)

void print_characters(char ch)
{
	int i, n;

	n = ch - 'a';

	for (i = 0; i <= n; i++) printf("%c", ch);
	printf("\n");
}

int main()
{
	print_characters('a');
	print_characters('b');
	print_characters('c');
	print_characters('d');
	print_characters('z');
}


