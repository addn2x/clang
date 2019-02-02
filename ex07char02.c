/* 
	EOF represents a value that signals the 
	end of a file was detacted 
*/

#include <stdio.h>

int main () {
	
	/* char c; */
	int c;
	/* 
		int is used because char variables may be represented 
		by unsigned integers in range 0 to 255, but EOF may 
		have numeric value -1.
		Also getchar() is int itself.
		
		char a = -1;
		putchar(a);
		Some implemetations suport char with EOF.
		
		program ends with Ctrl + D
		
		To use input from a file instead of a keyboard input
		run program:
		./a < gitC.txt
		
		To send keyboard input to a file use second
		redirection operator.
		./a > my_file.txt
		
		To copy gitC.txt issue the command:
			./a < gitC.txt > new_gitC.txt
		or
			./a > new_gitC.txt < gitC.txt
		
	*/
	
	
	while ((c = getchar()) != EOF) {
		putchar(c);
	}
	
	return 0;
}