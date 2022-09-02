#include "my_func.h"

void Registration(TEL** info, int cnt);
void ShowAll(TEL** info, int cnt);
void delete_tel(TEL** info, int cnt);
void FindByBirth(TEL** info, int cnt);
void Sort(TEL** info, int cnt);
void RegFromFile(FILE* in, TEL** info, int* cnt, int menu_num);

int main() {

	TEL** tel_list;
	FILE* in = NULL;

	int max_num;         // �ִ� ȸ����, ����ڷκ��� �Է�
	int cnt = 0;          // ���� ����ó ����
	int menu_num;

	printf("Max_num:");   // ���� 
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
				printf("OVERFLOW\n"); // ����ó �ִ� ���� ���� �ʰ�
				continue;
			}

			Registration(tel_list, cnt++); // ����ó ���� �� cnt
			Sort(tel_list, cnt); // ����
			printf("<<%d>>\n", cnt);
		}

		else if (menu_num == 2) {

			ShowAll(tel_list, cnt);

		}

		else if (menu_num == 3) {
			if (cnt == 0) printf("NO MEMBER\n");
			else {
				delete_tel(tel_list, (cnt--)); // ����ó ���� �� cnt
			}
		}


		else if (menu_num == 4) {
			FindByBirth(tel_list, cnt);
		}

		else if (menu_num == 5) {
			in = fopen("PHONE_BOOK.txt", "r");
			RegFromFile(in, tel_list, &cnt, menu_num);
			Sort(tel_list, cnt); // ����
			fclose(in);
		}
	}

	fclose(in);
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