/*
 * 
 */

#include <stdio.h>
#include <stdbool.h>

int main()
{

	short n = 10;

	short i = 1;
	do
	{
		if (i % 2 == 0)
		{
			printf("i %d is even\n", i);
		}
		++i;
	} while (i <= n);

	/* do-while vs while/for */
	printf("\n\n \t do-while vs while/for \n\n");
	{
		short j = 1;

		while (j > n)
		{
			printf("inside of a while loop");
			++j;
		}
	}

	{
		short j = 1;

		do
		{
			printf("\tinside of a do-while loop\n");
			++j;
		} while (j > n);
	}

	return 0;
}
