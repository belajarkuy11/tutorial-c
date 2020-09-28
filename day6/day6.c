#include<stdio.h>
#include<string.h>
void process(char prm[]);


void process(char prm[]) {
	printf("fungsi : %s \n", prm);
}

int main() {
	char sr[50] = {'a','r','d','i'};
	char p[35] = "ardi cakep";
	int i;

	for(i = 0; i < strlen(p); i++)
		printf("%c ", p[i]);

	printf("\n%s : %s\n", sr, p);

	process(p);
}
