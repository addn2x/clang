

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void printOddEven(short n);
bool odd(short n);

int main() {
	
	short n = 139;
	
	printOddEven(n);
	
	return 0;
}

void printOddEven(short n) {	
	for (short i = 0; i <= n; ++i) {
		if (odd(i)) {
			printf("%i is odd\n", i);
		} else {
			printf("%i is even\n", i);
		}
	}
}

bool odd(short n) {
	if (n % 2 == 0) {
		return false;
	} else {
		return true;
	}
} 
