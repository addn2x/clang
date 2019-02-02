/* sum all positive (negative, odd, even) values of given a, b, c
 */

#include <stdio.h>

int main() {
	
	short a = -4;
	short b = -5;
	short c = -6;
	short sum = 0;
	
	/*
	if (a > 0) {
		sum = sum + a;
		if (b > 0) {
			sum = sum + b;
			if (c > 0) {
				sum = sum + c;
			}
		}
	}
	*/
	/*
	if (a > 0) {
		sum = sum + a; // sum += a;
	}
	if (b > 0) {
		sum = sum + b; // sum += b;
	}
	if (c > 0) {
		sum = sum + c; // sum += c;
	}
	*/
	
	if (a > 0) {
		sum += a;
	} else if (b > 0) {
		sum += b;
	} else if (c > 0) {
		sum += c;
	} else {
		printf("none of the values are positive\n");
	}	
	printf("sum is: %d\n", sum); 	
	
	return 0;
}
