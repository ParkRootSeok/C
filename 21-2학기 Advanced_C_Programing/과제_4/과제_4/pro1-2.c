#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

typedef struct st {
	char* str;		// ���ڿ�
	int cnt1;		// ���� �� ����
	int cnt2;		// ���� �� ����
	int num;		// ���� ����
	int result1;	// ������� ����
	int result2;	// ������� ����
} ST;

int main() {
	ST* ar;

	int N;
	char str[100];

	scanf("%d", &N);
	getchar();

	// N�� ��ŭ �����Ҵ�.
	ar = (ST*)malloc(N * sizeof(ST));
	if (ar == NULL) return -1;


	for (ST* p = ar; p < ar + N; p++) {

		// ��(��)�� �� �ʱ�ȭ.
		p->cnt1 = 0;
		p->cnt2 = 0;

		gets(str);
		int len = strlen(str);

		// ���ڱ��̸�ŭ �����Ҵ�
		p->str = (char*)malloc((len + 1) * sizeof(char));
		if (p->str == NULL) return -1;

		// ���ڿ� ����
		strcpy(p->str, str);

		for (char* q = str; q < str + len; q++) {
			
			// ���� ����
			if ('0' <= *q && *q <= '9') p->num = (*q - '0');
			
			// ���� �� ī��Ʈ
			else if ('a' == *q || 'e' == *q || 'i' == *q || 'o' == *q || 'u' == *q
				|| 'A' == *q || 'E' == *q || 'I' == *q || 'O' == *q || 'U' == *q)
				p->cnt2++;
			
			// ���� �� ī��Ʈ
			else if ('a' <= *q && * q <= 'z' || 'A' <= *q && *q <= 'Z') p->cnt1++;
		}

		// ū �� �� ����
		p->result1 = p->cnt1 > p->cnt2 ? p->cnt1 * p->num : p->cnt2 * p->num;

		// ���� �� �� ����
		p->result2 = p->cnt1 > p->cnt2 ? p->cnt2 * p->num : p->cnt1 * p->num;

	}


	for (int i = 0; i < N ; i++) {

		for (int j = 0; j < N - 1; j++) {

			ST tmp;

			// ū ���� �� �������� ����
			if ((ar + j)->result1 < (ar + j + 1)->result1) {
				tmp = *(ar + j);
				*(ar + j) = *(ar + j + 1);
				*(ar + j + 1) = tmp;
			}

			// ������ ���� ���� �� ��������
			else if ((ar + j)->result1 == (ar + j + 1)->result1 && (ar + j)->result2 < (ar + j + 1)->result2) {
				tmp = *(ar + j);
				*(ar + j) = *(ar + j + 1);
				*(ar + j + 1) = tmp;
			}

		}

	}

	for (ST* p = ar; p < ar + N; p++) puts(p->str);

	if (ar != NULL) free(ar);
}

/*
5
His0tory
3Politics
2DonQuixote
LaPest9e
Chaos5
*/