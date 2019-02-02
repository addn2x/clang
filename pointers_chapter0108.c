/**
 * Constant pointers to constatns (cpci)
 * 
 * Given a constant pointer to a constant we cannot:
 * * Modify the pointer
 * * Modify the data pointed to by the pointer
 * Trying to assign a new address to cpci will result in a syntax error
 */

#include <stdio.h>

void f_a() {
    const int a = 12;
    const int *const cpici = &a;
    const int *const *ncpici = &cpici;
    /**
     * *ncpici can change pointing address, and to access the
     * value double pointer (**) must be used 
     */

    int b = 2;
    const int *const cpib = &b;

    /** error 
     * cpici = &b
     */

    printf("%d\n", *cpici);
    printf("%p\n", cpici);

    printf("%p\n", ncpici);
    printf("%p\n", *ncpici);
    printf("%d\n", **ncpici);

}

void run() {
    f_a();
}

int main() {
    run();
    return 0;
}