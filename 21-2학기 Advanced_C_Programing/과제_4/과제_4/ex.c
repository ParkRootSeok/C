#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//동적할당을 위한 함수 malloc. . . 이 있는 헤더파일

typedef struct subject {
	char* name;
	double score;
}SUBJECT;

typedef struct student { //word구조체 선언
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
		//학생의 정보를 문자열로 입력받았으므로, 문자열에서
		//학생들의 정보를 추출해야한다
		temp_len = strlen(temp);
		ptemp = temp;

		//과목개수를 먼저구해야한다.
		for (int j = 0; j <= temp_len; j++) {
			if (temp[j] == ' ') space_cnt++;
		}
		//공백개수를 2로 나누면 과목의 개수를 구할수있다.
		stu[i].numSubject = space_cnt / 2;
		stu[i].psub = (SUBJECT*)malloc(sizeof(SUBJECT) * stu[i].numSubject);
		//과목개수만큼 과목구조체의 메모리를 할당해준다.

		for (int j = 0; j <= temp_len; j++) {
			if (temp[j] == ' ' || temp[j] == NULL) {
				words_cnt++;
				end = j;

				if (name_flag == 0) {//name_flag가 0이면, 아직 이름에 대한 정보가 안나온것이므로
					stu[i].name = (char*)malloc(sizeof(char) * (end - start + 1));//문자열의 이름에 해당되는 길이+1만큼 메모리를 동적으로 할당하고
					strncpy(stu[i].name, ptemp, end - start);//strncpy function을 통해 학생의 이름을 저장해줍니다.
					stu[i].name[end - start] = NULL;//문자열의 끝처리 NULL을 해줍니다.
					for (int i = 0; i <= end - start; i++) ptemp++;//ptemp는 base pointer역할을 하므로, 다음 단어의 주소까지 이동시켜줍니다.
					name_flag = 1;//이름을 구했으므로, name_flag set(name_flag=1)
				}

				else if (id_flag == 0) {//id_flag가 0이면 학번순서
					//id는 이미 배열의 크기가 정해져있으므로 동적할당 X
					strncpy(stu[i].id, ptemp, end - start);//strncpy function을 통해 학생의 학번을 저장해줍니다.
					stu[i].id[end - start] = NULL;//문자열의 끝처리 NULL을 해줍니다.
					ptemp = ptemp + end - start + 1;//ptemp는 base pointer역할을 하므로, 다음 단어의 주소까지 이동시켜줍니다.
					id_flag = 1;//학번을 구했으므로, id_flag set
				}

				//이름과 학번을 구한뒤로는 과목과 점수가 나올것
				//과목은 홀수,점수는 짝수에 등장할것
				else if (words_cnt % 2 == 1) {//홀수라는것은 subject라는 것
					stu[i].psub[psub_idx].name = (char*)malloc(sizeof(char) * (end - start + 1));//공백전에 나온 문자열의길이+1만큼 메모리를 할당하고
						//학생의 이름을 구조체에 저장해줍니다.
					strncpy(stu[i].psub[psub_idx].name, ptemp, end - start);//strncpy function을 통해 학생의 이름을 저장해줍니다.
					stu[i].psub[psub_idx].name[end - start] = NULL;//문자열의 끝처리 NULL을 해줍니다.
					for (int i = 0; i <= end - start; i++) ptemp++;//ptemp는 base pointer역할을 하므로, 다음 단어의 주소까지 이동시켜줍니다.

				}

				else if (words_cnt % 2 == 0) {//짝수라는것은 subject의 점수라는것
					for (int k = start; k < end; k++) {
						score = score * 10;
						score = score + temp[k] - 48;
					}
					stu[i].psub[psub_idx].score = score;//과목의 점수를저장하고
					//점수를저장했기때문에
					psub_idx++;//다음 과목구조체 배열로 이동
					for (int i = 0; i <= end - start; i++) ptemp++;//ptemp는 base pointer역할을 하므로, 다음 단어의 주소까지 이동시켜줍니다.
					score = 0;
				}
				start = end + 1;//start point는 end point +1로 재지정합니다.
			}
		}
		//각 문자열,즉 학생마다 구조체에 과목점수를 입력받았기때문에
		//이제 총 과목 총 평균을 구한다
		for (int p = 0; p < stu[i].numSubject; p++) avg = avg + stu[i].psub[p].score;
		avg = avg / (double)stu[i].numSubject;//과목의 성적 총합을 과목 개수로 나누어줍니다.
		stu[i].avg = avg;//평균 저장
		avg = 0;
	}



	for (int i = 0; i < N; i++) {

		printf("%d %s %s %.2f\n", i, stu[i].name, stu[i].id, stu[i].avg);

	}

	/*
	//내림차순 정렬
	//버블정렬 실행
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (stu[j].avg < stu[j + 1].avg) {//학생들의 평균순으로 내림차순 정렬을 실행합니다
				stu_temp = stu[j];
				stu[j] = stu[j + 1];
				stu[j + 1] = stu_temp;
			}
			else if (stu[j].avg == stu[j + 1].avg) {//만약 평균성적이 같다면
				if (strcmp(stu[j].id, stu[j + 1].id) > 0) {//학번이 빠른 순으로 정렬합니다.
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
	//K번째학생의 제일 잘본 과목 찾기
	double max = 0;
	int max_idx = 0;
	//k번째학생의 과목중에 가장 스코어가 높은 과목을 찾아냅니다.
	for (int i = 0; i < stu[K].numSubject; i++) {
		if (max < stu[K].psub[i].score) {
			max = stu[K].psub[i].score;
			max_idx = i;
		}
	}
	//정답 출력파트
	printf("%s %s %.2f %s %.2f", stu[K].name, stu[K].id, stu[K].avg, stu[K].psub[max_idx].name, max);
	//메모리해제파트
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < stu[i].numSubject; j++) {
			free(stu[i].psub[j].name);
		}
	}
	for (int i = 0; i < N; i++) {
		free(stu[i].name);
		free(stu[i].psub);
	}
	//우선 각 구조체의 문자열의 메모리를 해제하고
	free(stu);//구조체배열의 메모리를 해제합니다.
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