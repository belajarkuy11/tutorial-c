#include<stdio.h>

void fungFor() {
	int i = 0;

	printf("FUNGSI FOR\n");
	for(i = 10; i > 5; i--) {
		printf("%d ", i);
	}
	printf("\n");
}

void fungWhile() {
	int i = 0;

	printf("FUNGSI WHILE\n");
	while(i < 5) {
		printf("%d ", i);
		i++;
	}
	printf("\n");
}

void fungDoWhile() {
	int i = 0;
	printf("FUNGSI DO WHILE\n");
	do {
		printf("%d ", i);
		i++;
	} while(i > 5);
	printf("\n");
}

int main() {
	
	fungDoWhile();
	return 0;
}
