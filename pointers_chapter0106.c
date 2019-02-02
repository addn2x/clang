/**
 * Multiple Levels of Indirection
 * 
 */

#include <stdio.h>

void f_a() {

    char *strings[] = {"First String", "Second String", 
    "Third String", "Fourth String", "Fifth String"};

    char **oddStr[3];
    char **evenStr[2];

    oddStr[0] = &strings[0];
    oddStr[1] = &strings[2];
    oddStr[2] = &strings[4];

    evenStr[0] = &strings[1];
    evenStr[1] = &strings[3];

    printf("\n%s\n", *oddStr[0]);
    printf("%s\n", *oddStr[1]);
    printf("%s\n\n", *oddStr[2]);

    printf("%s\n", *evenStr[1]);
    printf("%s\n\n", *evenStr[2]);
    
}

void run() {
    f_a();
}


int main() {
    run();
    return 0;
}