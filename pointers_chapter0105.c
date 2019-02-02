/*
      adding pointers
      subtracting pointers
      comparing pointers
*/

#include <stdio.h>

void adding_pointers()
{
    int array[] = {23, 45, 99};
    int *pi = array;

    int i;
    for (i = 1; i <= 3; i = i + 1)
    {
        printf("el.: %d\taddr.: %p\n", *pi, pi);
        pi = pi + 1;
    }
}

void subtracting_pointers()
{
    int array[] = {23, 45, 99};
    /* array length */
    int *pi = array + 2;

    int i;
    for (i = 1; i <= 3; i = i + 1)
    {
        printf("el.: %d\taddr.: %p\n", *pi, pi);
        pi = pi - 1;
    }
}

void comparing_pointers()
{
    int array[] = {23, 45, 99};
    /* array length */
    int *p0 = array;
    int *p1 = array + 1;
    int *p2 = array + 2;

    printf("el.: %d\taddr.: %p\n", *p0, p0);
    printf("el.: %d\taddr.: %p\n", *p1, p1);
    printf("el.: %d\taddr.: %p\n\n", *p2, p2);

    printf("is p0 > p1: %d\n", (p0 > p1));
}

void run()
{
    /* adding_pointers(); */
    /* subtracting_pointers(); */
    comparing_pointers();
}

int main()
{
    run();
    return 0;
}