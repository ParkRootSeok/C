#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {

	char tmp[100], **words, fst[100], snd[100], *ptmp;
	int space, end, start;

	gets(tmp);
	ptmp = tmp;
	int len = strlen(tmp);
	scanf("%s %s", &fst, &snd);

	space = 0;
	for (int i = 0; i < len; i++) {
		if (tmp[i] == ' ') space++;
	}
	space += 1;

	words = (char**)malloc(space * sizeof(char*));
	if (words == NULL) return -1;

	end = start = 0;
	int k = 0;
	for (int i = 0; i <= len; i++) {

		if (tmp[i] == ' ' || tmp[i] == NULL) {

			end = i;
			words[k] = (char*)malloc((end - start + 1) * sizeof(char));
			if (words[k] == NULL) return -1;

			strncpy(words[k], ptmp, end - start);
			words[k++][end - start] = 0;
			for (int i = 0; i <= end - start; i++) ptmp++;
			start = end + 1;
		}
	}

	for (int i = 0; i < space; i++) {
		if (strcmp(fst, words[i]) < 0 && strcmp(snd, words[i]) > 0) {
			puts(words[i]);
		}
	}

}

/*
lion cat tiger snake bear
caa szz
*/