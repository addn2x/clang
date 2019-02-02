
#include <stdio.h>
#include <stdbool.h>

/* function prototype */

int funcInt();
float funcFloat();
double funcDouble();
char funcChar1();
char funcChar2();

int main() {
	
	printf("%d, %.3f, %.7lf, %c, %c\n", 
			funcInt() + 3,
			funcFloat(),
			funcDouble(),
			funcChar1(),
			funcChar2());
			
	int a = funcInt() + 3;
	float f = funcFloat() + 2.0;
	
	
	return 0;
}

int funcInt() {
	
	return 3;
}

float funcFloat() {
	
	return 1.2345;
}

double funcDouble() {
	
	return 1.1234567890;
}

char funcChar1() {
	
	return 'a';
}

char funcChar2() {
	
	return 65;
}
