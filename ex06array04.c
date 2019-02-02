#include <stdio.h>

void print_array(const int array[], int n);
void print_array_ptr(const int *array, int n);

int sum(int array[], int n);
int sum_ptr(int *array, int n);

double avg(int array[], int n);
double avg_ptr(int *array, int n);

int main() {

    int a[] = {7, 4, 3, 8, 3, 6, 5};
    const int n = sizeof(a) / sizeof(a[0]); 

    print_array(a, n);
    printf("array sum = %d, array avg = %.3f\n\n", sum(a, n), avg(a, n));
    print_array(a, n);

    print_array_ptr(a, n);
    printf("array sum = %d, array avg = %.3f\n\n", sum_ptr(a, n), avg_ptr(a, n));
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

void print_array_ptr(const int *array, int n) {
    --n;
    printf("array = ");
    for (int i = 0; i <= n; i++) {
        printf("%d, ", *(array + i));
    }
    printf("\n\n");

}

int sum(int array[], int n) {
    int t = 0;
    for (int i = 0; i <= n; i++) {
        t += array[i];
    }
    return t;   
}

int sum_ptr(int *array, int n) {
    int t = 0;
    for (int i = 0; i <= n; i++) {
        t += *(array + i);
    }
    return t;   
}

double avg(int array[], int n) {
    return sum(array, n) / n;   
}

double avg_ptr(int *array, int n) {
    return sum(array, n) / n;  
}