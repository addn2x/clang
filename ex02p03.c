/*
 */
 
 #include <stdio.h>
 #include <stdbool.h>
 
 int main() {
	 short n = -43;
	 bool odd = n % 2 != 0;
	 bool positive = n > 0;
	 
	 /*(positive && odd) ? printf("positive and odd") : printf("???");*/
	 
	 if (positive) {
		 printf("n is positive \n");
		 if (odd) {
			 printf("n is odd\n");
		 } else {
			 printf("n is even\n");
		 }
	 } else {
		 printf("n is negative \n");
		 if (odd) {
			 printf("n is odd\n");
		 } else {
			 printf("n is even\n");
		 }
	 }
	 

	 return 0;
 }
