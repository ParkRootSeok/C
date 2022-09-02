#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996) 

int main() {
	char** str;
	int N;
	scanf("%d", &N);
	getchar();

	str = (char**)malloc(N * sizeof(char*));
	str = (char*)malloc(100 * sizeof(char));

	for (int i = 0; i < N; i++) {
		gets(str + i);
	}

	for (int i = 0; i < N; i++) {

		int cnt = 0;
		
		for (int j = 0; j < N; j++) {

			if (strcmp(str + i, str + j) == 0) cnt++;
			
		}

		if (cnt > 0) printf("%s %d\n", str + i, cnt);
	}
}

/*
6
lion
cat
tiger
lion
cat
lion
*/