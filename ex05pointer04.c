#include <stdio.h>

void swap(short a, short b);
void swapptr(short *a, short *b);

int main() {

    short a = 3;
    short b = 5;
    printf("main\n\ta = %d, \n\tb = %d\n", a, b);
    
    swap(a, b);
    printf("main\n\ta = %d, \n\tb = %d\n", a, b);

    swapptr(&a, &b);
    printf("main\n\ta = %d, \n\tb = %d\n", a, b);

    return 0;
}

void swap(short a, short b) {
    short t = a;
    a = b;
    b = t;
    printf("swap\n\ta = %d, \n\tb = %d\n", a, b);
}

void swapptr(short *a, short *b) {
    short t = *a;
    *a = *b;
    *b = t;
    printf("swap ptr\n\ta = %d, \n\tb = %d\n", *a, *b);
}
/*
void swapptr_const(short const *a, short const *b) {
    short t = *a;
    *a = *b;
    *b = t;
    printf("swap ptr\n\ta = %d, \n\tb = %d\n", *a, *b);
}
*/