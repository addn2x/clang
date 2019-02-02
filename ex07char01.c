/*
	echoing the input
	- process that fetches characters from keyboard,
		and send them to the screen
*/
/* 
	this example uses the while loop
	that terminates when the # character
	is encountered
*/

#include <stdio.h>

int main () {
	char c;
	while ((c = getchar()) != '#') {
		putchar(c);
	}
	return 0;
}

/* 
	buffered input
	unbuffered input
*/
