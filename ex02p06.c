/*
 * armstrongs number 153 (1^3 + 5^3 + 3^3)
 * palindrome
 */
 
 #include <stdio.h>
 #include <math.h> /* gcc -Wall chapter02p06.c -lm */
 #include <stdbool.h>
 int main() {
	 
	 short n = 135;
	 short exp = 3;
	 short a = n / 100;
	 short b = (n % 100) / 10;
	 short c = (n % 100) % 10;
	 
	 bool armstrong = (pow(a, exp) + pow(b, exp) + pow(c, exp)) == n;
	 
	 if (armstrong) {
		 printf("n is armstrong\n");
	 } else {
		 printf("n is not armstrong\n");
	 }
	 return 0;
 }
