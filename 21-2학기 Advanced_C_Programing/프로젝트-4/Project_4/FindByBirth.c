#include "my_func.h"

void FindByBirth(TEL** info, int cnt) {
	int birth, i;

	printf("Birth:");  // ����
	scanf("%d", &birth);

	for (i = 0; i < cnt; i++) {

		char tmp_char[3];
		int month;

		strncpy(tmp_char, &(*(info + i) + 0)->birth[4], 2); // �� �κи� ����.
		tmp_char[2] = 0; // ���ڿ� �� ǥ��
		month = atoi(tmp_char); // ���ڷκ�ȯ

		if (month == birth) {
			printf("%s %s %s\n", (*(info + i) + 0)->name, (*(info + i) + 0)->tel_no, (*(info + i) + 0)->birth);
		}
	}

}