
#include <stdio.h>
#include <stdbool.h>

/* function prototype */

short fnMin(int a, int b);
short fnMax(int a, int b);

/* also a valid function prototype */
/* not good practice */
bool fnPositive(int);
bool fnPositive2(int);

int main() {
	
	short a = 5,
		b = 13,
		min,
		max;
	
	min = fnMin(a, b);
	max = fnMax(a, b);
	
	printf("min = %d, max = %d\n", min, max);
	
	printf("min(3, 5, 8, 4, 1) = %d\n", fnMin(fnMin(3, 5), fnMin(fnMin(8, 4), 1)));
	
	
	printf("\nN = -5 ");
	if (fnPositive2(-5)) {
		printf(" is positive\n");
	} else {
		printf(" is negative\n");
	}
	
	return 0;
}

short fnMin(int a, int b) {
	return (a < b ? a : b);
}

short fnMax(int a, int b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

bool fnPositive(int n) {
	if (n > 0) {
		return true;
	} else {
		return false;
	}
}

bool fnPositive2(int n) {
	return ((n > 0) ? (true) : (false));
}
