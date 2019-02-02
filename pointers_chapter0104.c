/**
 *  Predefined Pointer-Related Types
    size_t -> Created to provide a safe type for sizes, provided by stdio.h and stdlib.h
    format specifier -> %zu (%u or %lu)
    The type size_t represents the maximum size any object can be in C. 
    It is an unsigned integer since negative numbers do not make sense in this context. Its purpose is to provide a portable means of declaring a size consistent with the addressable area of memory available on a system. The size_t type is used as the return type for the sizeof
    operator and as the argument to many functions, including malloc and strlen, among others.

    It is good practice to use size_t when declaring variables for sizes such as the number of characters and array indexes. It should be used 
    for loop counters, indexing into arrays, and sometimes for pointer arithmetic.

    ptrdiff_t -> Created to handle pointer arithmetic

    intptr_t and uintprt_t -> Used for storing pointer addresses with safety and portability.

*/

#include <stdio.h>

void run_size_t_()
{
    size_t negative = -5;
    size_t positive = 5;

     
    /* printf("%d\n", negative); */
    printf("%zu\n", negative);
    /* printf("%d\n", positive); */
    printf("%zu\n", positive);
}

void run_sizeof() {
    printf("Size of *char: %d\n",sizeof(char*));
}

void run_other_two() {
    int n;
    intptr_t *pi = &n;

    /* uintprt_t *pu = &n; */
    /*  Error cannot use uintptr_t 
        without without casting */
    /* uintprt_t *pu = (uniptr_t *)&n; */
    

}

void run()
{
}

int main()
{
    run();
    return 0;
}