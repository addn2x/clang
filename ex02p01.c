/*
 * 
 * 
 */

#include <stdio.h>

int main() {
	
	short n = -22;
	
	if (n % 2 == 0) {
		printf("n is even\n");
	} else {
		printf("n is odd\n");
	}
	
	if (n % 2 != 0) {
		printf("n is odd\n");
	} else {
		printf("n is even\n");
	}
	
	if (n > 0) {
		printf("n is positive\n");
	} else {
		printf("n is negative\n");
	}
	
	if (n < 0) {
		printf("n is negative\n");
	} else {
		printf("n is positive\n");
	}
	
	if (!(n > 0)) {
		printf("n is negative\n");
	} else {
		printf("n is positive\n");
	}
	
	printf("this is a text\n");	
	return 0;
}
