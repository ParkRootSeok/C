#include <stdio.h>	
#pragma warning(disable:4996)

struct complex add_complex(struct complex cp1, struct complex cp2);

struct complex {
	double x, y;
};


int main() {
	struct complex cp1, cp2, cp3;


	scanf("%lf %lf", &cp1.x, &cp1.y);
	scanf("%lf %lf", &cp2.x, &cp2.y);

	cp3 = add_complex(cp1, cp2);

	printf("%.1f + %.1fi", cp3.x, cp3.y);

}


struct complex add_complex(struct complex cp1, struct complex cp2) {

	struct complex cp3;

	cp3.x = cp1.x + cp2.x;
	cp3.y = cp1.y + cp2.y;

	return cp3;
}