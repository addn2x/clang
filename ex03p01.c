/* 
 * i = i + 1
 * i += 1
 * ++i increment by 1
 * 
 * i = i - 1
 * i -= 1
 * --i decrement by 1
 */	 
 
#include <stdio.h>
#include <stdbool.h>
 
 int main() {
	 
	 short n = 5;	 
	
	 printf("First example\n");
	 for (short i = 1; i <= n; ++i)
		 printf("\ti = %d \n", i);
		 printf("This is outside of loop \n\n");
	 
	 printf("Second example\n");
	 for (short i = 1, j = n; i <= n /*&& j != 3*/; ++i, --j) {
		 printf("\ti = %d\tj = %d\n", i, j);
	 }
	 
	 printf("Third example\n");
	 for (short i = 1; i <= n; ++i) {
		 if (i % 2 == 0) {
			printf("i %d is odd\n", i);
		 }
	 }
	 
	 /* infinite loop -> for (;;) / while(1)*/
	/* controlling expression is considered as true */
	
	 for (short i = 1; ; ++i) {		
		printf("i = %d\n", i);
		if ( i == 10) {
			break; 
			/* can be inside of if statement, 
			because if statement is inside loop */
		}
	}
	 
	 return 0;
 }
