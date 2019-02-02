#include <stdio.h>

void swap(int a, int b);

int main() {

    short a = 3;
    short b = 5;
    
    swap(a, b);
    printf("main\n\ta = %d, \n\tb= %d\n", a, b);

    return 0;
}

void swap(int a, int b) {
    short t = a;
    a = b;
    b = t;
    printf("swap\n\ta = %d, \n\tb= %d\n", a, b);
}