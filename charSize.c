#include <stdio.h>
/*
CAB 403: Systems Programming
Tutorial: 1
Date: 25/07/2018
Author: Koh Kim Hai
Queensland University of Technology

\n: sample backslash
*/
int main(){
	char myChar='r';
	int k=72; /* 65 is the ASCII encoding for 'A' */
	printf("The value printed is %c\n",k);
	printf("The value printed is %d\n",k+3);
	printf("The value printed is %c\n",k+3);
	printf("The value printed is %c\n",myChar+3);
	return 0;

}
