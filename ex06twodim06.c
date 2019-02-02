/*
    Pointer operations
        if the compiler doesn't support the %p specifier
        try %u or %ul for printing addresses.
        if it doesn't support the %td specifier, used for
        address differences, try %d or perhaps %ld 
*/

#include <stdio.h>

int main()
{

    int a[4][2] = {
        {2, 4},
        {1, 3},
        {3, 5},
        {4, 6}
    };

    printf("a = %p, a + 1 = %p\n", a, a + 1);
    /*
        a is the address of the array's first element,
        it is the same value as &a[0].
        a[0] is &a[0][0]
        a[1] is &a[1][0]...
    */

    printf("a[0] = %p, a[0] + 1 = %p\t", a[0], a[0] + 1);
    printf("*a = %p, *a + 1 = %p\n", *a, *a + 1 );
    /*

    */

    printf("a[0][0] = %d ", a[0][0]);
    printf("*a[0] = %d ", *a[0]);
    printf("**a = %d\n", **a);
    /*

    */
    
    printf("a[2][1] = %d\t", a[2][1]);
    printf("*(*(a + 2) + 1) = %d\n\n", *(*(a + 2) + 1));
    
    return 0;
}