/* 
    on a chessboard (8x8)
    - row: up -> down
    - column: left -> right 
    determin if:
    a) two fields are same color
    b) the queen attacks given field
    c) the knight attacks given field
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    const short two = 2;

    bool field = false,
		queen = false,
		knight = false;

    short y1 = 3;
    short x1 = 3;

    short y2 = 5;
    short x2 = 5;

    short y = abs(y1 - y2);
    short x = abs(x1 - x2);

    field = (y % two == 0 && x % two == 0);
    queen = (y1 == y2 || x1 == x2 || y == x);
    knight = (y % two == 1 && x % two == 0) || (y % two == 0 && x % two == 1);
    printf("two fields are the same color: %d\n", field);
    printf("the queen attacks given field: %d\n", queen);
    printf("the knight attacks given field: %d\n", knight);
    
    return 0;
}
