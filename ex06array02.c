#include <stdio.h>

#define INT_SIZE 7
#define FLOAT_SIZE 4

int main()
{
    int integers[INT_SIZE] = {3, 5, 6, 7, 1, 1, 0};
    const float floats[FLOAT_SIZE] = {3.2, 6.0, 5.3, 1.1};

    int *ptr_i = integers;

    printf("floats[] = ");
    for (int i = 0; i < 4; ++i)
    {
        printf("%.2f, ", floats[i]);
    }
    printf("\n\n");

    printf("integers[] = ");
    for (int i = 0; i < 7; ++i)
    {
        printf("%d, ", integers[i]);
    }
    printf("\n");

    printf("*ptr_i = ");
    for (int i = 0; i < 7; ++i)
    {
        printf("%d, ", *ptr_i);
        /* printf("%d, ", *ptr_i + 1); */
        /* printf("%d, ", *(ptr_i + 1)); */
        ++ptr_i;
    }
    printf("\n");

    /*printf("some array %d", some_array);*/

    return 0;
}