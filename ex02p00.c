/*
 * 
 * 
 */

#include <stdio.h>

int main() {
	
	short n = -22;
	short b;
	
	{
		short n = 3;
		short a = 1;
		b = n + a;
		printf("n = %d\n", n);
		printf("a = %d\n", a);
		printf("b = %d\n", b);
	}
	
	printf("n = %d\n", n);
	/*printf("a = %d\n", a);*/
	printf("b = %d\n", b);
	
	return 0;
}

