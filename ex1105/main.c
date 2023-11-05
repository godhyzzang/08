#include<stdio.h>
#include<stdlib.h>

#define N_STUDENT 5

int main(void) {

	int grade[N_STUDENT];
	int i;
	printf("inpit 5 scores");


	for (i = 0; i < N_STUDENT; i++)
		scanf_s("%d", &grade[i]);

	for (i = 0; i < N_STUDENT; i++)
		printf("grade[%i] = %i\n", i, grade[i]);


	return 0;
}