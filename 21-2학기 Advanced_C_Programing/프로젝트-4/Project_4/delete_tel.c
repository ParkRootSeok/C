#include "my_func.h"

void delete_tel(TEL** info, int cnt) {
	int i, j;
	char name[100];

	printf("Name:");
	gets(name);

	for (i = 0; i < cnt; i++) {

		if (strcmp((*(info + i) + 0)->name, name) == 0) {
			//printf("%s %s %s\n", (*(info + i) + 0)->name, (*(info + i) + 0)->tel_no, (*(info + i) + 0)->birth);
			for (j = i; j < cnt - 1; j++) *(*(info + j) + 0) = *(*(info + j + 1) + 0); // 하나씩 앞 당기기.
		}
	}

	/*
	free((*(info + cnt) + 0)->name);
	free((*(info + cnt) + 0)->tel_no);
	free((*(info + cnt) + 0)->birth);
	free(info + cnt);
	*/
}