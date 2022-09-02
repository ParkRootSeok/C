#include "my_func.h"

void ShowAll(TEL** info, int cnt) {

	for (int i = 0; i < cnt; i++) {
		printf("%s %s %s\n", (*(info + i) + 0)->name, (*(info + i) + 0)->tel_no, (*(info + i) + 0)->birth);
	}

}