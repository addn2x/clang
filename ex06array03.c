#include <stdio.h>
/*
#define NELEMS(x)  (sizeof(x) / sizeof((x)[0]))
*/

void print_array(const int array[], int n);
void increment_array(int array[], int n);

/* void print_array(const int [], int); */
/* void increment_array(int [], int); */

void print_array_ptr(const int *array, int n);
void increment_array_ptr(int *array, int n);

/* void print_array(int *, int); */
/* void increment_array(int *, int); */

int main() {

    int a[] = {7, 4, 3, 8, 3, 6, 5};

    const int n = sizeof(a) / sizeof(a[0]); 
    /* int n = sizeof(a) / sizeof(*a); */
    /* int n = sizeof(a) / sizeof(int); */

    print_array(a, n);
    increment_array(a, n);
    print_array(a, n);

    print_array_ptr(a, n);
    increment_array_ptr(a, n);
    print_array_ptr(a, n);

    return 0;
}

void print_array(const int array[], int n) {
    --n;
    printf("array = ");
    /* for (int i = 0; i <= n; ++i) */
    for (int i = 0; i <= n; i++) {
        printf("%d, ", array[i]);
    }
    printf("\n\n");

}

void increment_array(int array[], int n) {
    for (int i = 0; i <= n; i++) {
        ++array[i];
    }    
}

void print_array_ptr(const int *array, int n) {
    --n;
    printf("array = ");
    /* for (int i = 0; i <= n; ++i) */
    for (int i = 0; i <= n; i++) {
        printf("%d, ", *(array + i));
    }
    printf("\n\n");

}

void increment_array_ptr(int *array, int n) {
    for (int i = 0; i <= n; i++) {
        ++*(array + i); /* *(array + i) += 1; */
    }    
}