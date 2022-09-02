#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {

	char a[100], b[100], * tmp1, * tmp2, ** words_A, ** words_B, ** words_AB;
	int start = 0, end = 0, alen, blen, space_A, space_B, space_AB;

	gets(a);
	alen = strlen(a);
	gets(b);
	blen = strlen(b);

	tmp1 = a;
	tmp2 = b;

	// �ܾ� ���� ���ϱ�
	space_A = 0;
	for (int i = 0; i < alen; i++) if (a[i] == ' ') space_A++;
	space_A += 1;

	// �����Ҵ�(a)
	words_A = (char**)malloc(space_A * sizeof(char*));
	if (words_A == NULL) return -1;

	// �ܾ� ���� ���ϱ�
	space_B = 0;
	for (int i = 0; i < blen; i++) if (b[i] == ' ') space_B++;
	space_B += 1;

	// �����Ҵ�(b)
	words_B = (char**)malloc(space_B * sizeof(char*));
	if (words_B == NULL) return -1;

	// ���ڿ� �и�(a)
	int k = 0;
	for (int i = 0; i <= alen; i++) {

		if (a[i] == ' ' || a[i] == NULL) {

			end = i;

			// �ܾ� ũ�⸸ŭ �����Ҵ�
			words_A[k] = (char*)malloc((end - start + 1) * sizeof(char));
			if (words_A[k] == NULL) return -1;

			strncpy(words_A[k], tmp1, end - start);	// ���ڿ� ����
			words_A[k++][end - start] = NULL;		// ���ڿ� ��

			tmp1 += end - start + 1; // ��ġ �̵�
			start = end + 1;
		}
	}

	// ���ڿ� �и�(b)
	k = end = start = 0;
	for (int i = 0; i <= blen; i++) {

		if (b[i] == ' ' || b[i] == NULL) {

			end = i;

			// �ܾ� ũ�⸸ŭ �����Ҵ�
			words_B[k] = (char*)malloc((end - start + 1) * sizeof(char));
			if (words_B[k] == NULL) return -1;

			strncpy(words_B[k], tmp2, end - start);	// ���ڿ� ����
			words_B[k++][end - start] = NULL;		// ���ڿ� ��

			tmp2 += end - start + 1; // ��ġ �̵�
			start = end + 1;
		}
	}

	// ������ �ܾ� ���� ���ϱ�
	space_AB = 0;
	for (int i = 0; i < space_A; i++) {
		for (int j = 0; j < space_B; j++) {
			if (strcmp(words_A[i], words_B[j]) == 0) {
				space_AB++;
			}
		}
	}

	// �����Ҵ�(ab)
	words_AB = (char**)malloc(space_AB * sizeof(char*));
	if (words_AB == NULL) return -1;

	// ������ ���ڿ� ����
	k = 0;
	for (int i = 0; i < space_A; i++) {
		for (int j = 0; j < space_B; j++) {
			if (strcmp(words_A[i], words_B[j]) == 0) {
				words_AB[k] = (char*)malloc((strlen(words_A[i]) + 1) * sizeof(char));
				if (words_AB[k] == NULL) return -1;

				strcpy(words_AB[k], words_A[i]);
				words_AB[k++][strlen(words_A[i]) + 1] = NULL;
			}
		}
	}


	// ����
	for (int i = 0; i < space_AB; i++) {

		for (int j = 0; j < space_AB - i - 1; j++) {

			char temp[100];

			// �ܾ� ���̼� ����
			if (strlen(words_AB[j]) < strlen(words_AB[j + 1])) {
				strcpy(temp, words_AB[j]);
				strcpy(words_AB[j], words_AB[j + 1]);
				strcpy(words_AB[j + 1], temp);
			}

			// ������ ���������� ����
			else if (strlen(words_AB[j]) == strlen(words_AB[j + 1])
				&& strcmp(words_AB[j], words_AB[j + 1]) > 0) {
				strcpy(temp, words_AB[j]);
				strcpy(words_AB[j], words_AB[j + 1]);
				strcpy(words_AB[j + 1], temp);
			}

		}
	}


	for (int i = 0; i < space_AB; i++) {
		puts(words_AB[i]);
	}

	//�޸�������Ʈ
	for (int i = 0; i < space_A; i++) {
		free(words_A[i]);
	}
	free(words_A);

	for (int i = 0; i < space_B; i++) {
		free(words_B[i]);
	}
	free(words_B);

	for (int i = 0; i < space_AB; i++) {
		free(words_AB[i]);
	}
	free(words_AB);

}