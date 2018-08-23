#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(int argc, char **argv) {

	int alice = 42;
	int bob = 23;
	int *ptr_to_answer = &alice;
	
	switch(*ptr_to_answer) {
		case 42:
			printf("%d - Answer to the Ultimate Question of Life,	the Universe and Everything.\n", *ptr_to_answer);
				
		case 43:
			ptr_to_answer = 0;
				
		case 44:
			printf("%d - Not the answer. Why is this statement executed?.\n", *ptr_to_answer);
			fflush(stdout);
	}
	
	bob = 0;
	while(alice > 0)
		bob++;
		alice--;
	
	if (bob != 42) {
		printf("Why is bob not 42?\n");
		while (bob != 42) {
			continue;
		}
	}
	
	char *string;
	strcpy(string, "buggy?");
	
	char string1[] = "DEADBEEF";
	char string2[] = "DEADBEEF";
	char *ptr1 = string1;
	char *ptr2 = string2;
	
	if (string1 != string2) {
		printf("What is different between the strings?\n");
		
		while (ptr1 != ptr2) {
			continue;
		}
	}

	double half = 1/2;
	printf("Isn't 0.5 bigger than 0?\n");
	while (half > 0) {
		continue;
	}

	printf("Congratulations, you have reached the end of the code!\n");
	printf("Discuss with your tutor what errors you have discovered in the code.\n");
	
	return 0;
}