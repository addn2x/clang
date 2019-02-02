/**
 * The declaration of pci as pointer to a constan integer means;
 * * pci can be assigned to point to a different constant integers
 * * pci can be assigned to pint to different nonconstant integers
 * * pci can be deferenced for reading purposes
 * * pci cannot be dereferenced to change what it points to
 * const int *pci <=> int const *pci
 */

#include <stdio.h>

void f_a () {
    
    int n = 5;
    const int limit = 500;
    int *pi;
    const int *pci; /* pointer to a constant integer */

    pi = &n;
    pci = &limit;
    /* 
    Illegal
        pci = &n;
        pci = 200;
    */

    printf("n address : %p\tvalue: %d\n", &n, n);
    printf("limit address : %p\tvalue: %d\n", &limit, limit); 
    printf("*pi address : %p\tpointed address: %p\tvalue: %d\n", &pi, pi, *pi); 
    printf("*pci address : %p\tpointed address: %p\tvalue: %d\n", &pci, pci,*pci);     
}

/**
 * Declare constant pointer to a nonconstant
 * - pointer cannot point to another value (other that initialized),
 * but data can be changed
 */

void f_b () {

    int n = 6;
    int m = 7;
    int *const cpi = &n;

    printf("cpi address: %p\tpoints to address: %p\tvalue: %d\n", &cpi, cpi, *cpi);

    *cpi = 3;

    printf("cpi address: %p\tpoints to address: %p\tvalue: %d\n", &cpi, cpi, *cpi);

    *cpi = m;

    printf("cpi address: %p\tpoints to address: %p\tvalue: %d\n", &cpi, cpi, *cpi);

    /**
     * error: assignment of read-only variable ‘cpi’
     * cpi = &m;
     */
    
    /**
     * warning: initialization discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
     */
    const int l = 30;
    printf("l = %d\n", l);
    /**
     * error: assignment of read-only variable ‘l’
     *
    l = l + 5;
    printf("l = %d\n", l);*/

    int *const ncpi = &l;
    *ncpi = 22;

    printf("l = %d\n", l);
}

void run() {
    f_b();
}

int main() {
    run();
    return 0;
}