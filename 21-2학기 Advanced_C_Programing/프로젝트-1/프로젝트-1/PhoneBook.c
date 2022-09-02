#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

typedef struct _person {

	char name[21], number[16], birth[9];

} PERSON ;

void Registration(PERSON* info);
void ShowAll(PERSON* info, int i);
void delete(PERSON* info, int i);
void FindByBirth(PERSON* info, int i);
void Sort(PERSON* info, int i);

int main() {

	PERSON info[100], *pinfo = info;
	int menu_num;

	int i = 0;
	while (1) {
		
		printf("*****Menu*****\n");
		printf("<1.Registration><2.ShowAll><3.Delete><4.FindByBirth><5.Exit>\n");
		printf("Enter_the_menu_number: ");
		scanf("%d", &menu_num);
		getchar();

		if (i > 100) printf("OVERFLOW\n"); // ����ó �ִ� ���� ���� �ʰ�
		if (menu_num == 5) break;

		else if (menu_num == 1) {
			
			Registration(info + (i++)); // ����ó ���� �� cnt
			Sort(info, i); // ����
			printf("<<%d>>\n", i);
		}

		else if (menu_num == 2) {
		
			ShowAll(info, i);
			
		}

		else if (menu_num == 3) {
			if (i == 0) printf("NO MEMBER\n");
			else {
				delete(info, (i--)); // ����ó ���� �� cnt
			}
		}

		else if (menu_num == 4) {
			FindByBirth(info, i);
		}

	}

}

void Registration(PERSON* info) {

	printf("Name:");  // ����
	gets(info->name);
	printf("Phone_number:"); // ����
	gets(info->number);
	printf("Birth:"); //����
	gets(info->birth);

}


void ShowAll(PERSON* info, int i) {
	
	PERSON* p;

	for (p = info; p < info + i; p++) {
		printf("%s %s %s\n", p->name, p->number, p->birth);
	}
	
}

void delete(PERSON* info, int i) {
	PERSON *p, *q;
	char name[21];

	printf("Name:");
	gets(name);

	for (p = info; p < info + i; p++) {

		if (strcmp(p->name, name) == 0) {
			for (q = p; q < info + i - 1; q++) *q = *(q + 1); // �ϳ��� �� ����.
		}

	}
}

void FindByBirth(PERSON* info, int i) {

	PERSON *p;
	int birth;

	printf("Birth:");  // ����
	scanf("%d", &birth);

	for (p = info ; p < info + i ; p++) {
		
		char tmp_char[3];
		int month;

		strncpy(tmp_char, &p->birth[4], 2); // �� �κи� ����.
		tmp_char[2] = 0; // ���ڿ� �� ǥ��
		month = atoi(tmp_char); // ���ڷκ�ȯ

		if (month == birth) {
			printf("%s %s %s\n", p->name, p->number, p->birth);
		}
	}

}

void Sort(PERSON* info, int i) {
	PERSON* p, * q;

	for (p = info; p < info + i; p++) {
			
		for (q = info; q < info + i - 1; q++) {

			if (strcmp(q->name, (q + 1)->name) > 0) {
				PERSON tmp = *q;
				*q = *(q + 1);
				*(q + 1) = tmp;
			}

		}

	}

}

/*
1
KimEunJoo
0001112222
19960101
1
LeeEunJoo
0103332222
19960202
1
HanEunJoo
0114445555
20000101
*/