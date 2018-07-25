#include <stdio.h>
#include <limits.h>
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
	printf("Maximum integer positive value: %d\n",INT_MAX);
	printf("Maximum unsigned integer : %u\n",UINT_MAX);
	printf("Maximum short signed integer value: %hi\n",SHRT_MAX);
	printf("Minimum short signed integer value: %hi\n",SHRT_MIN);
	printf("Maximum signed long value: %li\n",LONG_MAX);
	printf("Maximum unsigned longvalue: %lu\n",ULONG_MAX);
	return 0;
}
