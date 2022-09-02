#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

typedef struct _tourcity {
	char tour[21], city[21], io[2], start[9];
	int fee;
	
} TOURCITY;


int main() {

	TOURCITY** tr, *max = NULL;

	int N, M[3];
	char tmp[100], **city;

	scanf("%d", &N);
	getchar();

	// 도시수만큼 동적 할당.
	tr = (TOURCITY**)malloc(N * sizeof(TOURCITY*));
	city = (TOURCITY**)malloc(N * sizeof(TOURCITY*));

	if (tr == NULL) {
		printf("Not Enough Memory\n");
		return - 1;
	}

	if (city == NULL) {
		printf("Not Enough Memory\n");
		return -1;
	}

	
	// 도시명 저장.
	for (int i = 0; i < N; i++) {
		scanf("%s", &tmp);
		city[i] = (char*)malloc((strlen(tmp) + 1) * sizeof(char));
		strcpy(city[i], tmp);
	}
	

	// 도시별 관광지수만큼 동적 할당.
	for (int i = 0; i < N; i++) {
		scanf("%d", &M[i]);
		getchar();

		tr[i] = (TOURCITY*)malloc(M[i] * sizeof(TOURCITY));
	
		if (tr[i] == NULL) {
			printf("Not Enough Memory\n");
			return -1;
		}
	}

	// 정보 입력
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M[i]; j++) {
			strcpy((tr[i] + j)->city, city[i]);
			scanf("%s %d %s %s", &(*(tr + i) + j)->tour, &(*(tr + i) + j)->fee, &(*(tr + i) + j)->io, &(*(tr + i) + j)->start);
		}
	}

	int fee_max = -1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M[i]; j++) {

			/*
			printf("------%d %d---------\n", i, j);
			printf("입력된 정보 : %s %s %d %s %s\n", (tr[i] + j)->city, (tr[i] + j)->tour, (tr[i] + j)->fee, (tr[i] + j)->io, (tr[i] + j)->start);
			printf("%d %d\n", fee_max, (tr[i] + j)->fee);
			*/

			// 최고가격 관광지 구하기.
			if (fee_max < (tr[i] + j)->fee ) {		
				fee_max = (tr[i] + j)->fee;
				max = tr[i] + j;
			}

			else if (fee_max == (tr[i] + j)->fee && strcmp((tr[i] + j)->start, max->start) < 0) {
				fee_max = (tr[i] + j)->fee;
				max = tr[i] + j;
			}
		}
	}

	printf("%s %s %d %s %s ", max->city, max->tour, max->fee, max->start, max->io);

	//메모리해제파트
	for (int i = 0; i <N; i++) {
		free(tr[i]);
		free(city[i]);
	}
	free(tr);
	free(city);
}

/*
3
Seoul Busan Yeosu
3 1 2
Coex 0 I 19970513 
Duksugung 2000 O 20000101
Museum 1500 I 19950323 
Haewoondae 5500 O 19851200
Haetul 2500 B 20010305 
SeaHouse 5500 O 19841200	
*/