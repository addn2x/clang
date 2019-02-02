/*
    boolean value of result is true
    if given values a, b, c are
    a) all equal 
    b) all even numbers

*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool resultA = false,
		resultB = false;

    short a = 2,
		    b = 4,
		    c = 6;

    resultA = (a == b) && (a == c) && (b == c);
    resultB = ((a % 2) == 0) && ((b % 2) == 0) && ((c % 2) == 0);
    
    printf("A = %d, B = %d\n", resultA, resultB);
        
    return 0;
}
