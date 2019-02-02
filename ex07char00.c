/*
 * 
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
	
	char first = 65;
	char second = 'Z';
	char third = first + 32;
	char newLine = '\n';
	
	printf("first %d, second %d, third %d newLine %d %c", first, second, third, newLine, newLine);
	printf("first %c, second %c, third %c %c", first, second, third, newLine);
	
	printf("sizeof(first) %zu\n", sizeof(first));
	/*	
		%lu is format for sizeof(first)
		but is not portable
		To have a portable code, 
		it's safe to use %zu, 
		on compilers based on C99 
		and forward standards.
	*/
	return 0;
}