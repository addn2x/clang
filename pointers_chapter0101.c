#include <stdio.h>

int main()
{

    int *pa; /*Declaration of a pointer */

    const int *pci; /* pci is pointer variable to a constant integer */

    int b = 4;
    int *pb = &b;

    printf("b: %d\npb: %d\n", b, *pb);
    /*printf("b: %d\npb: %d\n", &b, pb);*/
    printf("Pointer address: %d\nPointer value: %d\n", &pb, *pb);
    *pb = 5;
    printf("b: %d\npb: %d\n", b, *pb);
    return 0;
}