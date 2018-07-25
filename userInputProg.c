#include <stdio.h>
/*
CAB 403: Systems Programming
Tutorial: 1
Date: 25/07/2018
Author: Koh Kim Hai
Queensland University of Technology

\n: sample backslash
*/
int main()
{
	/* Declares an integer variable to hold the number read in */
	int num;
	/* Declares an integer variable to hold the sum */
	int sum;
	/*Initialise the sum */
	sum=0;
	do{
	printf("Sum so far: %d\n",sum);
	printf("Enter number: ");
	/* Read in an integer from the user */
	scanf("%d",&num);
	/*Add num to sum*/
	sum= sum+ num;
	}while(num >-1);

	printf("FINAL TOTAL: %d\n",sum);
	return 0;
}
