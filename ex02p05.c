
/*
 * determine greater of given values a, b (a, b, c)
 * */

#include <stdio.h>

int main() {
	
	short a = 5;
	short b = 3;
	short max;
	
	if (a > b) {
		max = a;
	} else if (b > a) {
		max = b;
	} else {
		max = a;
	}
		
	return 0;
}
