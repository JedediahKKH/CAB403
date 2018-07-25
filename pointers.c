#include <stdio.h>
/*
CAB 403: Systems Programming
Tutorial: 1
Date: 25/07/2018
Author: Koh Kim Hai
Queensland University of Technology

\n: sample backslash
*/
int main(void){
	int a=45;
	int b=22;
	int *p1=0;
	int *p2=0;
	/* & symbol tels p and p2 to point to the memory address
	 where a and b is stored respectively */
	p1=&a;
	p2=&b;
	/*
	To print the value in the memory location that pointer is 
	pointing to, we need to use the dereferencing operator, *
	*/
	printf("The value of p1 is %d and the memory address location is  %p\n",*p1,p1);
	printf("The value of p2 is %d and the memory address location is  %p\n",*p2,p2);
	printf("The value of a is %d and the memory address location is  %p\n",a,&a);
	printf("The value of b is %d and the memory address location is  %p\n",b,&b);
	return 0;
}
