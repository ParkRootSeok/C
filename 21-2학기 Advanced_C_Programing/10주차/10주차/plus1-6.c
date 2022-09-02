#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main() {
	char tmp[100], phone[50][5], num[5];
	int N, len;
	scanf("%d", &N);
	getchar();

	for (int i = 0; i < N; i++) {
	
		gets(tmp);
		len = strlen(tmp);
		
		int j = 0, k = 0, cnt = 0, flag = 0;

		for (char *p = tmp; p < tmp + len; p++) {

			if ('0' <= *p && *p <= '9' && cnt < 5) {
				num[j++] = *p;
				cnt++;
			}

			if (cnt == 4 && !('0' <= *(p + 1) && *(p+1) <= '9')) {
				num[j] = 0;
				j = 0;

				strcpy(phone[k], num);
				puts(phone[k++]);
				cnt = 0;
				flag = 1;
			}
		}

		if (flag == 0) printf("none\n");
	}


}