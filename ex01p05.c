/*
	* convert degrees in celsius 
	* to dregrees feirenheit 
	* and otherwise
*/
#include <stdio.h>

int main() 
{
	const float nf = 9.0 / 5.0;
	const float fn = 1.0 / nf;
	const short tt = 32;
	
	float givenf = 68;
	float givenc = 20;
	
	float f = givenc * nf + tt;
	float c = (givenf - tt) * fn;
	
	printf("Given C(%f) is F(%f)\n", givenc, f);
	printf("Given F(%f) is C(%f)\n", givenf, c);
	
	return 0;
}
