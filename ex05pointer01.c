/*
 */
 
#include <stdio.h>
#include <stdbool.h>

int main() {
	
	short a = 5;
	
	printf("value a = %hu \n", a);
	printf("address a = %u \n\n", &a);
	
	short *pointer_variable_example;

	short *pa = &a;
	/* Best practice while using pointer is 
		to initialize pointer before using it. */
	
	/* int *pa = &a; *//* wrong */
	
	printf("*pa = %i \n", *pa);
	printf("&a = pa = %u \n\n", pa);	
	
	/*  16 bit systems take up 2 bytes, 
		32 bit systems 4 bytes, 
		64 bit system 8 bytes */
	printf("sizeof(pa) = %i \n", sizeof(pa));
	printf("sizeof(*pa) = %i \n", sizeof(*pa)); /* sizeof(a) */
	*pa = 7;
	printf("a = %d \n\n", a); /* printf("*pa = %i \n", *pa); */
	
	int *pr;
	printf("pr = %i \n", pr);
	printf("*pr = %u \n", *pr);
	printf("sizeof(pr) = %i \n", sizeof(pr));
	printf("sizeof(*pr) = %i \n", sizeof(*pr));
		
	short *po = NULL;
	printf("po = %i \n", po);
	/* printf("*po = %i \n", *po); */ /* will compile, but won't execute */
		
	return 0;
}
