#include<stdio.h>

int main() {
	// pointer array
	int i_[4] = {1,2,3,4};
	int (*p)[4];
	int i;
	p = &i_;
	for(i = 0; i < 4; i++)
		printf("%u ", p[i]);

	// array of pointer
	//
	printf("\n\n");
	int *q[10];
	int a = 1, b = 2, c = 3;
	q[0] = &a;
	q[1] = &b;
	q[2] = &c;
	for(i = 0; i < 3; i++) printf("%u ",q[i]);
	return 0;
}
