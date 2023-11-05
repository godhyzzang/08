#include<stdio.h>
#include<stdlib.h>

#define N_STUDENT 5

int main(void) {

	int grade[N_STUDENT];
	int score[N_STUDENT];
	int i;
	
	for (i = 0; i < N_STUDENT; i++)
		grade[i] = rand() % 100 +1;
	//grade -> score copy

	for (i = 0; i < N_STUDENT; i++)
		score[i] = grade[i];
	
	for (i = 0; i < N_STUDENT; i++)
		printf("score[%d] = %d (grade:%i)\n", i, score[i]);

	
	return 0;
}