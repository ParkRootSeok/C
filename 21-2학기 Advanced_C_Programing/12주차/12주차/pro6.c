#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void swap(char** words1, char** words2);

int main() {

	char tmp[100], ** words, * ptmp;
	int space, end, start;

	gets(tmp);
	ptmp = tmp;
	int len = strlen(tmp);

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
		for (int j = 0; j < space - 1; j++) {
			if (strcmp(words[j], words[j + 1]) > 0) {
				strcpy(tmp, words[j]);
				strcpy(words[j], words[j + 1]);
				strcpy(words[j + 1], tmp);
			}
		}
	}

	for (int i = 0; i < space; i++) {
		puts(words[i]);
	}

}

void swap(char** words1, char** words2) {
	char tmp = words1;
	words1 = words2;
	words2 = tmp;
}

/*
lion cat tiger snake bear
caa szz
*/