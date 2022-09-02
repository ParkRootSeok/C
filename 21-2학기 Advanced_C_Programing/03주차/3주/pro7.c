#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int N, res, i = 1000, flag;

	scanf("%d", &N);

	while (N > 0) {

		flag = 0;
		res = N / i;
		N %= i;
		i /= 10;
		

		switch (res) {
		case 1: printf("one ");
			flag = 1;
			break;
		case 2: printf("two ");
			flag = 1;
			break;
		case 3: printf("three ");
			flag = 1;
			break;
		case 4: printf("four ");
			flag = 1;
			break;
		case 5: printf("five ");
			flag = 1;
			break;
		case 6: printf("six ");
			flag = 1;
			break;
		case 7: printf("seven ");
			flag = 1;
			break;
		case 8: printf("eight "); 
			flag = 1;
			break;
		case 9: printf("nine ");
			flag = 1;
			break;
		default:
			break;
		}

		if (flag == 1) {
			switch (i) {
			case 100: printf("THO ");
				break;
			case 10: printf("HUN ");
				break;
			case 1: printf("TEN ");
				break;
			}
		}

	}
	
}