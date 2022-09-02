#include "my_func.h"

void Registration(TEL** info, int cnt) {

	int len;
	char tmp[100] = { "\0" };

	printf("Name:");  gets(tmp);// 고정
	len = strlen(tmp);
	(*(info + cnt) + 0)->name = (char*)malloc(sizeof(char) * (len + 1));
	if ((*(info + cnt) + 0)->name == NULL) return -1;
	strcpy((*(info + cnt) + 0)->name, tmp);

	printf("Phone_number:"); gets(tmp);// 고정
	len = strlen(tmp);
	(*(info + cnt) + 0)->tel_no = (char*)malloc(sizeof(char) * (len + 1));
	if ((*(info + cnt) + 0)->tel_no == NULL) return -1;
	strcpy((*(info + cnt) + 0)->tel_no, tmp);

	printf("Birth:"); gets(tmp);//고정
	len = strlen(tmp);
	(*(info + cnt) + 0)->birth = (char*)malloc(sizeof(char) * (len + 1));
	if ((*(info + cnt) + 0)->birth == NULL) return -1;
	strcpy((*(info + cnt) + 0)->birth, tmp);
}