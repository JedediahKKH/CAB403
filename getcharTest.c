#include <stdio.h>
./*
CAB 403: Systems Programming
Tutorial: 1
Date: 25/07/2018
Author: Koh Kim Hai
Queensland University of Technology

\n: sample backslash
*/
int main(){
	char c;
	printf("Enter Character: ");
	c=getchar();
	printf("Character Entered: ");
	printf("%d",c);	/* Prints associated integer */
//	printf("%c",c); /* Prints Character */
	return 0;

}
