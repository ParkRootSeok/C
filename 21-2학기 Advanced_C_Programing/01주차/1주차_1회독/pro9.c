#include <stdio.h>
#pragma warning(disable:4996)

int* mid(int * ar);

int main() {
	int i, tmp;
	int ar[3], * par, * j, * midn;

	for (par = ar; par < ar + 3; par++) {
		scanf("%d", par);
	}
	
	midn = mid(ar);
	printf("%d", *midn);
}


int* mid(int* ar) {
	int fstn, sndn, flag;
	int* p, * q, * fst = NULL, * snd = NULL;

	// 최대값
	fstn = *ar;
	for (p = ar + 1; p < ar + 3; p++) {

		if (fstn <= *p) {
			fstn = *p;
			fst = p;
		}
	}

	// 두번째 최대값
	sndn = *ar;
	for (p = ar + 1; p < ar + 3; p++) {

		if (sndn <= *p && p != fst) {
			sndn = *p;
			snd = p;
		}
	}

	return snd;
}