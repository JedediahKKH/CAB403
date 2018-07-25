#include <stdio.h>
#include <math.h>
/*
CAB 403: Systems Programming
Tutorial: 1
Date: 25/07/2018
Author: Koh Kim Hai
Queensland University of Technology

\n: sample backslash
*/

int cylinderVolumeCalc(int r, int h);
int main(){
	int volume,radius,height;
	printf("Enter two integers separated by a space: ");
	scanf("%d%d",&radius,&height);
	volume=cylinderVolumeCalc(radius,height);
	printf("\nThe volume of the cylinder is %d\n",volume);
	return 0;
}

int cylinderVolumeCalc(int r, int h){
	return M_PI*r*r*h;
}
