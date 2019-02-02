/*


*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool result = true;

    float x1 = 0, 
		y1 = 1,
		x2 = -0.5,
		y2 = 0,
		x3 = 1,
		y3 = 3;

    /* y = k*x + n */
    float k = 2;
    float n = 1;

    result = (y1 == k * x1 + n) && (y2 == k * x2 + n) && (y3 == k * x3 + n);

    printf("Result: %d\n", result);

    return 0;
}
