#include "my_func.h"

void FindByBirth(TEL** info, int cnt) {
	int birth, i;

	printf("Birth:");  // 고정
	scanf("%d", &birth);

	for (i = 0; i < cnt; i++) {

		char tmp_char[3];
		int month;

		strncpy(tmp_char, &(*(info + i) + 0)->birth[4], 2); // 월 부분만 복사.
		tmp_char[2] = 0; // 문자열 끝 표시
		month = atoi(tmp_char); // 숫자로변환

		if (month == birth) {
			printf("%s %s %s\n", (*(info + i) + 0)->name, (*(info + i) + 0)->tel_no, (*(info + i) + 0)->birth);
		}
	}

}