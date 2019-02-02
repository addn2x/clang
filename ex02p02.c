/*
 * 
 * 
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
	
	short n = -22;
	short st;
	bool bt;
	short sp;
	bool bp;
	
	st = n % 2 == 0;
	bt = n % 2 == 0;
	sp = n > 0;
	bp = n > 0;
	
	if (st) {
		printf("n is even\n");
	} else {
		printf("n is odd\n");
	}
	
	if (!st) {
		printf("n is odd\n");
	} else {
		printf("n is even\n");
	}
	
	if (bt) {
		printf("n is even\n");
	} else {
		printf("n is odd\n");
	}
	
	if (!bt) {
		printf("n is odd\n");
	} else {
		printf("n is even\n");
	}
	
	st ? printf("-n is even\n") : printf("-n is odd\n");
	!(bp) ? printf("-n is negative\n") : printf("-n is positive\n");
	
	printf("this is a text\n");	
	return 0;
}
