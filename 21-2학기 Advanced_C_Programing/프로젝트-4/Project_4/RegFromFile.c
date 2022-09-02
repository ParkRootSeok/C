#include "my_func.h"

void RegFromFile(FILE* in, TEL** info, int* cnt, int menu_num) {

	// µî·Ï
	if (menu_num == 5) {

		char name[21] = { '\0' };
		char number[16] = { '\0' };
		char birth[9] = { '\0' };
		int len;

		while (fscanf(in, "%s %s %s\n", &name, &number, &birth) != EOF) {

			len = strlen(name);
			(*(info + *cnt) + 0)->name = (char*)malloc(sizeof(char) * (len + 1));
			if ((*(info + *cnt) + 0)->name == NULL) return -1;
			strcpy((*(info + *cnt) + 0)->name, name);

			len = strlen(number);
			(*(info + *cnt) + 0)->tel_no = (char*)malloc(sizeof(char) * (len + 1));
			if ((*(info + *cnt) + 0)->tel_no == NULL) return -1;
			strcpy((*(info + *cnt) + 0)->tel_no, number);

			len = strlen(birth);
			(*(info + *cnt) + 0)->birth = (char*)malloc(sizeof(char) * (len + 1));
			if ((*(info + *cnt) + 0)->birth == NULL) return -1;
			strcpy((*(info + *cnt) + 0)->birth, birth);

			(*cnt)++;
		}

	}

	else if (menu_num == 6) {

		for (int i = 0; i < *cnt; i++) {
			fprintf(in, "%s %s %s\n", (*(info + i))->name, (*(info + i))->tel_no, (*(info + i))->birth);
		}
	}

}