#include <stdio.h>
#pragma warning(disable:4996)


struct student {

	int id;
	char name[10];
	double grade;

};


int main() {

	struct student st[2] = { { 10, "Tom", 3.2 }, { 20, "Cat" } };


	printf("id: %d\n", st[0].id);

	printf("id: %d\n", st->id);

	printf("id: %d\n", (st + 1)->id);

	//printf("id: %d\n", *st.id);

}