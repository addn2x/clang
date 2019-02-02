#include <stdio.h>

int main() {

    int a[3][4] = {{2, 5, 6, 1}, 
                    {7, 1, 7, 1}, 
                    {8, 9, 8, 9}};
    
    int (*ptr_a1)[4]; /* points to an array of two ints */
    /* int *ptr_a[4]; ptr_a is an array of two pointers to int */ 

    printf("a[3][4] = \n");
    for(int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    ptr_a1 = a;
    printf("ptr_a = \n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("\t%d", (*(ptr_a1 + i))[j]);    
            /* [] operator is higher priority than * - pointer operator */
        }
        printf("\n");
    }

    printf("ptr_a1 = \n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("\t%d", *(*(ptr_a1 + i) + j));
        }
        printf("\n");
    }

    /* WRONG */
    int **ptr_a2;
    ptr_a2 = (int (*) [3])a;

    
    printf("ptr_a2 = \n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            printf("\t%d", *(*(ptr_a2 + i) + j));
        }
        printf("\n");
    }

    /*
        https://stackoverflow.com/questions/7586702/is-2d-array-a-double-pointer

        The rules for multidimensional arrays are not different from those for ordinary arrays, just substitute the "inner" array type as element type. The array items are stored in memory directly after each other.
        Therefore, to address element matrix[x][y], you take the base address of matrix + x*4 + y (4 is the inner array size).
        
        When arrays are passed to functions, they decay to pointers to their first element. As you noticed, this would be int (*)[4]. The 4 in the type would then tell the compiler the size of the inner type, which is why it works. When doing pointer arithmetic on a similar pointer, the compiler adds multiples of the element size, so for matrix_ptr[x][y], you get matrix_ptr + x*4 + y, which is exactly the same as above.

        The cast ptr=(int**)matrix is therefore incorrect. For once, *ptr would mean a pointer value stored at address of matrix, but there isn't any. Secondly, There isn't a pointer to matrix[1] anywhere in the memory of the program.
    */

    return 0;
}