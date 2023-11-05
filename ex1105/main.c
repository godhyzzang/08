#include<stdio.h>
#include<stdlib.h>

#define N_STUDENT 5

int main(void) {

	int grade[N_STUDENT];
	int i,average;
	int sum;
	printf("input 5 scores");

	sum = 0;
	for (i = 0; i < N_STUDENT; i++)
	{
		scanf_s("%d", &grade[i]);
		sum += grade[i];
	}

	average = sum / N_STUDENT;
		
	printf("score average : %i\n" , average);


	return 0;
}