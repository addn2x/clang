/*
 * exchange values of two numbers a and b
 * without using any other varible
 */


#include <stdio.h>

int main() {
	
	short a = -3;
	short b = 5;
	
	a = a - b;
	/* a -= b */
	b = b + a;
	/* b += a */
	a = b - a;
	
	printf("a = %d,\nb = %d\n", a, b);
	
	return 0;
}
