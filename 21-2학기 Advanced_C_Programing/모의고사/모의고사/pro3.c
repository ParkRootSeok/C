#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

void StringAdd(char arr[], char ch, int idx);
int Convertor(char x);

int main() {
	int odd = 0, even = 0, len, i, cnt = 0;
	char *p, str[100];

	gets(str);
	len = strlen(str);

	for (i = 0, p = str; p < str + len + cnt; i++, p++) {

		int num = Convertor(*p); // 정수로 변환
		//printf("%d ", num);

		
		//짝수이면
		if (num != 1 && num != 3 && num != 5 && num != 7 && num != 9)	{
			even++;
			odd = 0; // 초기화
		}
		//홀수이면
		else {
			odd++;
			even = 0; // 초기화
		}
		
		// 연속 짝수
		if (odd > 1) {
			StringAdd(str, '+', i);
			p++;
			i++;
			cnt++;
		}
		// 연속 홀수
		else if (even > 1) {
			StringAdd(str, '*', i);
			p++;
			i++;
			cnt++;
		}

	}

	puts(str);

}

void StringAdd(char str[], char ch, int idx) {

	int i, len = strlen(str);
	for (i = 0; i < len - idx; i++) {
		str[len - i] = str[len - i - 1];
	}

	str[len + 1] = '\0';
	str[idx] = ch;
}

int Convertor(char x) {

	int num = x - '0';
	return num;
	
}