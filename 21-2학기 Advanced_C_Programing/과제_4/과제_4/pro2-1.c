#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {

	char x[100], * tmp, ** words;
	int start = 0, end = 0, xlen, space = 0;

	gets(x);
	xlen = strlen(x);
	tmp = x;

	// �ܾ� ���� ���ϱ�
	for (int i = 0; i < xlen; i++) if (x[i] == ' ') space++;
	space += 1;

	// �����Ҵ�
	words = (char**)malloc(space * sizeof(char*));


	int k = 0;
	for (int i = 0; i <= xlen; i++) {

		if (x[i] == ' ' || x[i] == NULL) {

			end = i;

			// �ܾ� ũ�⸸ŭ �����Ҵ�
			words[k] = (char*)malloc((end - start + 1) * sizeof(char));

			strncpy(words[k], tmp, end - start);	// ���ڿ� ����
			words[k++][end - start] = NULL;		// ���ڿ� ��

			tmp += end - start + 1; // ��ġ �̵�
			start = end + 1;
		}
	}


	for (int i = 0; i < space; i++) {

		for (int j = 0; j < space - i - 1; j++) {

			char temp[100];

			// �ܾ� ���̼� ����
			if (strlen(words[j]) < strlen(words[j + 1])) {
				strcpy(temp, words[j]);
				strcpy(words[j], words[j + 1]);
				strcpy(words[j + 1], temp);
			}

			// ������ ���������� ����
			else if (strlen(words[j]) == strlen(words[j + 1])
				&& strcmp(words[j], words[j + 1]) > 0) {
				strcpy(temp, words[j]);
				strcpy(words[j], words[j + 1]);
				strcpy(words[j + 1], temp);
			}

		}
	}


	for (int i = 0; i < space; i++) {
		puts(words[i]);
	}


}
