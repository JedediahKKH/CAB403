#include <stdio.h>
/*
CAB 403: Systems Programming
Tutorial: 1
Date: 25/07/2018
Author: Koh Kim Hai
Queensland University of Technology

\n: sample backslash
*/

int sumNumbers(int a, int b); /* function prototype */
int main(void){
	int a,b,result;
	printf("Enter two integers separated by a space: ");
	scanf("%d%d",&a,&b);
	result = sumNumbers(a,b);
	printf("\nThe sum of %d and %d is %d\n",a,b,result);
	return 0;
}

int sumNumbers (int x, int y){
	return x+y;
}
