#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int cnt, max;
	char ch[10] = {'0'}, *pch, *i, *j, max_c;

	for (pch = ch; pch < ch + 10; pch++) {
		scanf("%c", pch);
	}

	pch = ch;
	max = 0;

	for (i = pch; i < pch + 10; i++)
	{
		cnt = 0;
		for (j = pch; j < pch + 10; j++)
		{
			if (*(i) == *(j)) cnt++;
		}

		if (max < cnt)
		{
			max = cnt;
			max_c = *(i);
		}
	}

	printf("%c %d", max_c, max);

}