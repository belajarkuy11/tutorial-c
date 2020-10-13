#include<stdio.h>

int main() {
	int i = 12;
	int *p_i;
	int j = i;

	*p_i = i;
	p_i = &i;

	printf("i %d - %u\n", i, &i);
	printf("p %d - %u\n", *p_i, p_i);
	printf("j %d - %u\n", j, &j);

	return 0;
}
