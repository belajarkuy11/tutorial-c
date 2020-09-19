#include<stdio.h>
#include"opr.h"

int getPlus(int a, int b);
void setUmur(int u);

int main() {
	printf("hasil jumlah %d\n", getPlus(2, 9));

	setUmur(20);

	printf("hasil kurang %d\n", getMinus(19, 4));
	return 0;
}

void setUmur(int u) {
	printf("umur %d\n", u);
}

int getPlus(int a, int b) {
	return a+b;
}
