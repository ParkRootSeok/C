#include <stdio.h>
#pragma warning(disable:4996)
/*
int a = 10; 
int b = 20;

int f1(int a) {
	static int b = 0;

	a++;
	b = b + a;

	return b;
}

int main() {
	int a;

	for (a = 0; a <	3; a++)
	{
		b = b + f1(a);
	
		printf("%d %d\n", a, b);
	}

	printf("%d, %d\n", a, b);
}
*/



/*
int main() {
	int i;
	char c;

	// abc0def1ghi2
	/*
	for (i = 0; i < 10; i++) {
		scanf("%c", &c);
		if ('0' <= c && c <= '9') {
			continue;
		}
		printf("%c", c);
	}
	
	
	for (i = 0; i < 10; i++) {
		scanf("%c", &c);
		if ('0' <= c && c <= '9') {
			break;
		}
		printf("%c", c);
	}
}
*/
/*
int main() {
	int kor, eng, math, grade;
	double avg;

	scanf("%d%d%d", &kor, &eng, &math);
	avg = (kor + eng + math) / 3.0;
	printf("%.2f\n", avg);

	if (avg >= 75) grade = 1;
	else if (avg >= 50) grade = 2;
	
	switch (grade) {
	case 1:
		printf("A\n");
		break;
	case 2: 
		printf("B\n");
		break;
	default:
		printf("F\n");
		break;
	}
}
*/

int main() {
	int date[2][3];

	scanf("%d %d %d", &date[0][0], &date[0][1], &date[0][2]);
	scanf("%d %d %d", &date[1][0], &date[1][1], &date[1][2]);

	if (date[0][0] == date[1][0] && date[0][1] == date[1][1] &&
		date[0][2] == date[1][2]) {
		printf("You same");
	}
	else if (date[0][0] < date[1][0] || date[0][1] < date[1][1] ||
		date[0][2] < date[1][2])
	{
		printf("%.2d/%.2d/%.2d is earlier. \n", date[0][0], date[0][1], date[0][2]);
	}
	else
	{
		printf("%.2d/%.2d/%.2d is earlier. \n", date[1][0], date[1][1], date[1][2]);
	}
}
