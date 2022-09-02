#include <stdio.h>
#pragma warning(disable:4996)

char is_upper(char);
char is_lower(char);
int is_digit(char);
int is_vowel(char);
void print_vowcon(char);
void print_class(char);

int main()
{
	int N, i;
	char ch;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		getchar();
		scanf("%c", &ch);
		print_class(ch);
	}
	return 0;
}

char is_upper(char ch)
{
	return ('A' <= ch && ch <= 'Z');
}
char is_lower(char ch)
{
	return ('a' <= ch && ch <= 'z');
}
int is_digit(char ch)
{
	return ('0' <= ch && ch <= '9');
}
int is_vowel(char ch)	{
	if ('a' == ch || 'e' == ch || 'i' == ch || 'o' == ch || 'u' == ch ||
		'A' == ch || 'E' == ch || 'I' == ch || 'O' == ch || 'U' == ch) return 1;
	else return 0;
}

void print_class(char ch)	{
	if (is_upper(ch)) {
		printf("대문자 ");
		print_vowcon(ch);
	}
	else if (is_lower(ch)) {
		printf("소문자 ");
		print_vowcon(ch);
	}
	else if (is_digit(ch)) {
		printf("숫자\n");
	}
}

void print_vowcon(char ch)	{
	if (is_vowel(ch)) printf("모음\n");
	else printf("자음\n");
}
