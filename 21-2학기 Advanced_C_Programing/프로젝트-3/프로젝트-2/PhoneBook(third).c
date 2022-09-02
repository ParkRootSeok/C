#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

typedef struct tel
{
	char* name;
	char* tel_no;
	char* birth;

} TEL;

void Registration(TEL** info, int cnt);
void ShowAll(TEL** info, int cnt);
void delete(TEL** info, int cnt);
void FindByBirth(TEL** info, int cnt);
void Sort(TEL** info, int cnt);
void RegFromFile(FILE * in, TEL** info, int* cnt, int menu_num);

int main() {

	TEL** tel_list;
	FILE* in = NULL;

	int max_num;         // 최대 회원수, 사용자로부터 입력
	int cnt = 0;          // 현재 연락처 개수
	int menu_num;

	printf("Max_num:");   // 고정 
	scanf("%d", &max_num);

	tel_list = (TEL**)malloc(sizeof(TEL*) * max_num);
	if (tel_list == NULL) return -1;
	for (int i = 0; i < max_num; i++) {
		tel_list[i] = (TEL*)malloc(sizeof(TEL));
		if (tel_list[i] == NULL) return -1;
	}

	int flag = 1;
	while (1) {

		printf("*****Menu*****\n");
		printf("<1.Registration><2.ShowAll><3.Delete><4.FindByBirth><5.RegFromFile><6.Exit>\n");
		printf("Enter_the_menu_number: ");
		scanf("%d", &menu_num);
		getchar();

		if (menu_num == 6) {
			in = fopen("PHONE_BOOK.txt", "a");
			RegFromFile(in, tel_list, &cnt, menu_num);
			fclose(in);
			break;
		}
		else if (menu_num == 1) {

			if (cnt >= max_num) {
				printf("OVERFLOW\n"); // 연락처 최대 저장 개수 초과
				continue;
			}

			Registration(tel_list, cnt++); // 연락처 저장 후 cnt
			Sort(tel_list, cnt); // 정렬
			printf("<<%d>>\n", cnt);
		}

		else if (menu_num == 2) {

			ShowAll(tel_list, cnt);

		}

		else if (menu_num == 3) {
			if (cnt == 0) printf("NO MEMBER\n");
			else {
				delete(tel_list, (cnt--)); // 연락처 삭제 후 cnt
			}
		}


		else if (menu_num == 4) {
			FindByBirth(tel_list, cnt);
		}

		else if (menu_num == 5) {
			in = fopen("PHONE_BOOK.txt", "r");
			RegFromFile(in, tel_list, &cnt, menu_num);
			Sort(tel_list, cnt); // 정렬
			fclose(in);
		}
	}

	fclose(in);
}

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

void ShowAll(TEL** info, int cnt) {

	for (int i = 0; i < cnt; i++) {
		printf("%s %s %s\n", (*(info + i) + 0)->name, (*(info + i) + 0)->tel_no, (*(info + i) + 0)->birth);
	}

}


void delete(TEL** info, int cnt) {
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

void Sort(TEL** info, int cnt) {
	int i, j;

	for (i = 0; i < cnt; i++) {

		for (j = 0; j < cnt - 1; j++) {

			if (strcmp((*(info + j) + 0)->name, (*(info + j + 1) + 0)->name) > 0) {
				TEL tmp = *(*(info + j) + 0);
				*(*(info + j) + 0) = *(*(info + j + 1) + 0);
				*(*(info + j + 1) + 0) = tmp;
			}

		}

	}

}

void RegFromFile(FILE* in, TEL** info, int * cnt, int menu_num) {

	// 등록
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

/*
1
Kim
00000000000
19980101
1
Gang
11101010101
19940101 
1
Park
222333330101
20000101
*/