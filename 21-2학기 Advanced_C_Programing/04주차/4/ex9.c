#include <stdio.h>
#pragma warning(disable:4996)

typedef struct box {
	int Maindish, beverage, sidedish1, sidedish2, sidedish3;
} BOX;

int main() {
	BOX box[2];

	for (int i = 0; i < 2; i++) {
		scanf("%d", &box[i].Maindish);
		scanf("%d", &box[i].sidedish1);
		scanf("%d", &box[i].sidedish2);
		scanf("%d", &box[i].sidedish3);
		scanf("%d", &box[i].beverage);
	}
		

	for (int i = 0; i < 2; i++) {
		printf("%d\n", box[i].Maindish);
		printf("%d\n", box[i].sidedish1);
		printf("%d\n", box[i].sidedish2);
		printf("%d\n", box[i].sidedish3);
		printf("%d\n", box[i].beverage);
	}
}