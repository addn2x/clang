/*
 * convert dollars to franks provided
 * 1 dollar is 80 eur and
 * 1 frank is 100 eur 
*/

#include <stdio.h>

int main() 
{
	const short dollar = 80;
	const short frank = 100;
	
	float inputDollar = 3.0;
	float inputFrank = 5.0;
	
	float outputFrank;
	float outputDollar;
	
	outputFrank = (inputDollar * dollar) / frank;
	outputDollar = (inputFrank * frank) / dollar;
	
	printf("Given dollar %f is %.2f franks\n", inputDollar, outputFrank);
	printf("Given frank %f is %.2f dollars\n", inputFrank, outputDollar);
			
	return 0;
}
