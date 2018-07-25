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
	void *ptr;
	char a='A';
	int b=2;
	float c=3;
	ptr=&a;
	printf("\nThe value of a = %c\n",*((char*)ptr));
	ptr=&b;
	printf("\nThe value of b = %d\n",*((int*)ptr));
	ptr=&c;
	printf("\nThe value of c = %f\n",*((float*)ptr));
//	printf("\nThe value of c = %f\n",*(ptr));
	/*
	Error: invalid use of void expression
	pointer is not a text in memory but is a memory location that must be
	properly casted to ensure proper dereferencing.
	*/
	return 0;
}
