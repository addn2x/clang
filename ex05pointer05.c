#include <stdio.h>

double Add(double a, double b) { return  a + b; }
double Sub(double a, double b) { return  a - b; }
double Mul(double a, double b) { return  a * b; }
double Div(double a, double b) { return  a / b; }

int main() {

    double (*fnptr)(double, double);
    /*
        double *fnptr(double, double); is prototypeof a function,
        not definition of a pointer
    */
    fnptr = Add;
    printf("a + b = %.3f\n", fnptr(3, 4));

    fnptr = Sub;
    printf("a - b = %.3f\n", fnptr(3, 4));

    fnptr = Mul;
    printf("a * b = %.3f\n", fnptr(3, 4));

    fnptr = Div;
    printf("a / b = %.3f\n", fnptr(3, 4));

    return 0;
}