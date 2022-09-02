#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//�����Ҵ��� ���� �Լ� malloc. . . �� �ִ� �������

typedef struct subject {
	char* name;
	double score;
}SUBJECT;

typedef struct student { //word����ü ����
	char* name;
	char id[5];
	int numSubject;
	SUBJECT* psub;
	double avg;
}STUDENT;

int main() {
	int N;
	scanf("%d", &N);
	getchar();

	STUDENT* stu;
	STUDENT stu_temp;
	stu = (STUDENT*)malloc(sizeof(STUDENT) * N);

	char temp[101], * ptemp;
	int start = 0, end = 0, name_flag = 0, id_flag = 0, words_cnt = 0, space_cnt = 0;
	double score = 0, avg = 0;
	int temp_len = 0, psub_idx = 0;

	for (int i = 0; i < N; i++) {

		start = 0;
		end = 0;
		id_flag = 0;
		name_flag = 0;
		space_cnt = 0;
		psub_idx = 0;

		gets(temp);
		//�л��� ������ ���ڿ��� �Է¹޾����Ƿ�, ���ڿ�����
		//�л����� ������ �����ؾ��Ѵ�
		temp_len = strlen(temp);
		ptemp = temp;

		//���񰳼��� �������ؾ��Ѵ�.
		for (int j = 0; j <= temp_len; j++) {
			if (temp[j] == ' ') space_cnt++;
		}
		//���鰳���� 2�� ������ ������ ������ ���Ҽ��ִ�.
		stu[i].numSubject = space_cnt / 2;
		stu[i].psub = (SUBJECT*)malloc(sizeof(SUBJECT) * stu[i].numSubject);
		//���񰳼���ŭ ������ü�� �޸𸮸� �Ҵ����ش�.

		for (int j = 0; j <= temp_len; j++) {
			if (temp[j] == ' ' || temp[j] == NULL) {
				words_cnt++;
				end = j;

				if (name_flag == 0) {//name_flag�� 0�̸�, ���� �̸��� ���� ������ �ȳ��°��̹Ƿ�
					stu[i].name = (char*)malloc(sizeof(char) * (end - start + 1));//���ڿ��� �̸��� �ش�Ǵ� ����+1��ŭ �޸𸮸� �������� �Ҵ��ϰ�
					strncpy(stu[i].name, ptemp, end - start);//strncpy function�� ���� �л��� �̸��� �������ݴϴ�.
					stu[i].name[end - start] = NULL;//���ڿ��� ��ó�� NULL�� ���ݴϴ�.
					for (int i = 0; i <= end - start; i++) ptemp++;//ptemp�� base pointer������ �ϹǷ�, ���� �ܾ��� �ּұ��� �̵������ݴϴ�.
					name_flag = 1;//�̸��� �������Ƿ�, name_flag set(name_flag=1)
				}

				else if (id_flag == 0) {//id_flag�� 0�̸� �й�����
					//id�� �̹� �迭�� ũ�Ⱑ �����������Ƿ� �����Ҵ� X
					strncpy(stu[i].id, ptemp, end - start);//strncpy function�� ���� �л��� �й��� �������ݴϴ�.
					stu[i].id[end - start] = NULL;//���ڿ��� ��ó�� NULL�� ���ݴϴ�.
					ptemp = ptemp + end - start + 1;//ptemp�� base pointer������ �ϹǷ�, ���� �ܾ��� �ּұ��� �̵������ݴϴ�.
					id_flag = 1;//�й��� �������Ƿ�, id_flag set
				}

				//�̸��� �й��� ���ѵڷδ� ����� ������ ���ð�
				//������ Ȧ��,������ ¦���� �����Ұ�
				else if (words_cnt % 2 == 1) {//Ȧ����°��� subject��� ��
					stu[i].psub[psub_idx].name = (char*)malloc(sizeof(char) * (end - start + 1));//�������� ���� ���ڿ��Ǳ���+1��ŭ �޸𸮸� �Ҵ��ϰ�
						//�л��� �̸��� ����ü�� �������ݴϴ�.
					strncpy(stu[i].psub[psub_idx].name, ptemp, end - start);//strncpy function�� ���� �л��� �̸��� �������ݴϴ�.
					stu[i].psub[psub_idx].name[end - start] = NULL;//���ڿ��� ��ó�� NULL�� ���ݴϴ�.
					for (int i = 0; i <= end - start; i++) ptemp++;//ptemp�� base pointer������ �ϹǷ�, ���� �ܾ��� �ּұ��� �̵������ݴϴ�.

				}

				else if (words_cnt % 2 == 0) {//¦����°��� subject�� ������°�
					for (int k = start; k < end; k++) {
						score = score * 10;
						score = score + temp[k] - 48;
					}
					stu[i].psub[psub_idx].score = score;//������ �����������ϰ�
					//�����������߱⶧����
					psub_idx++;//���� ������ü �迭�� �̵�
					for (int i = 0; i <= end - start; i++) ptemp++;//ptemp�� base pointer������ �ϹǷ�, ���� �ܾ��� �ּұ��� �̵������ݴϴ�.
					score = 0;
				}
				start = end + 1;//start point�� end point +1�� �������մϴ�.
			}
		}
		//�� ���ڿ�,�� �л����� ����ü�� ���������� �Է¹޾ұ⶧����
		//���� �� ���� �� ����� ���Ѵ�
		for (int p = 0; p < stu[i].numSubject; p++) avg = avg + stu[i].psub[p].score;
		avg = avg / (double)stu[i].numSubject;//������ ���� ������ ���� ������ �������ݴϴ�.
		stu[i].avg = avg;//��� ����
		avg = 0;
	}



	for (int i = 0; i < N; i++) {

		printf("%d %s %s %.2f\n", i, stu[i].name, stu[i].id, stu[i].avg);

	}

	/*
	//�������� ����
	//�������� ����
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (stu[j].avg < stu[j + 1].avg) {//�л����� ��ռ����� �������� ������ �����մϴ�
				stu_temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = stu_temp;
			}
			else if (stu[j].avg == stu[j + 1].avg) {//���� ��ռ����� ���ٸ�
				if (strcmp(stu[j].id, stu[j + 1].id) > 0) {//�й��� ���� ������ �����մϴ�.
					stu_temp = stu[j];
					stu[j] = stu[j + 1];
					stu[j + 1] = stu_temp;
				}
			}
		}
	}


	int K;
	scanf("%d", &K);
	K = K - 1;
	//K��°�л��� ���� �ߺ� ���� ã��
	double max = 0;
	int max_idx = 0;
	//k��°�л��� �����߿� ���� ���ھ ���� ������ ã�Ƴ��ϴ�.
	for (int i = 0; i < stu[K].numSubject; i++) {
		if (max < stu[K].psub[i].score) {
			max = stu[K].psub[i].score;
			max_idx = i;
		}
	}
	//���� �����Ʈ
	printf("%s %s %.2f %s %.2f", stu[K].name, stu[K].id, stu[K].avg, stu[K].psub[max_idx].name, max);
	//�޸�������Ʈ
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < stu[i].numSubject; j++) {
			free(stu[i].psub[j].name);
		}
	}
	for (int i = 0; i < N; i++) {
		free(stu[i].name);
		free(stu[i].psub);
	}
	//�켱 �� ����ü�� ���ڿ��� �޸𸮸� �����ϰ�
	free(stu);//����ü�迭�� �޸𸮸� �����մϴ�.
	return 0;
	*/
}

/*
5
HongGilDong 1003 Math 85 C 80 AdvC 90
JeonWooChi 1001 English 60 C 75 Physics 80 Math 70
HeungBoo 1002 Economics 80 AdvC 90 Math 80 C 90
NolBoo 1004 Ethics 50 C 62
Euler 1005 Math 100 Physics 90 AdvC 85
2
*/