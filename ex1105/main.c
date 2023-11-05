#include<stdio.h>
#include<stdlib.h>

#define N_STUDENT 5

int main(void) {

	int a[N_STUDENT] = {1,2,3,4,5};
	int b[N_STUDENT] = { 1,2,3,4,6 };
	int i;
	int flag = 0; 
	
	for (i = 0; i < N_STUDENT; i++) {
	
		if (a[i] != b[i]) { //not one is
			printf("array a and b are not the same");
			flag = 1;
		}
		else
			printf("array a and b are the same");
	}
	
	return 0;
}