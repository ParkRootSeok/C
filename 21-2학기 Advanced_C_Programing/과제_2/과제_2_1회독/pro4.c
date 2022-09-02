#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int s_check(char* p, char* q);

int main() {
	int i, M, k1, k2, len, cnt;
	char str[200];

	scanf("%d", &M);
	scanf("%d %d", &k1, &k2);
	getchar();
	
	for (i = 0; i < M; i++)	{

		gets(str);
		len = strlen(str);

		if (len < k2 ) {
			cnt = s_check(str + k1, str + len);
		}
		else {
			cnt = s_check(str + k1, str + k2);
		}
		if (cnt != 0) printf("%d\n", cnt);
	}
}

int s_check(char* p, char* q) {
	int cnt = 0;
	char * i;

	for (i = p; i <= q; i++) {
		
		if ('a' <= *i && *i <= 'z') {
			cnt++;
		}

	}

	return cnt;

}