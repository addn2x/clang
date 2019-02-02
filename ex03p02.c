/*
	while loop
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
 
	short n = 10;
	
	{
		short i = 1;
		while (i <= n) {
			printf("i %d\n", i);
			++i;
		}
	}
	
	{
		short i = 1;
		while (i <= n) {
			if (i % 2 == 0) {
				printf("i %d\n", i);
			}
			++i;
		}
	}
	
	{
		short i = 1;
		while (1) {
			printf("i %d\n", i);
			if (i == n) {
				break;
			}
			++i;
		}
	}
	
	
	return 0;
}
