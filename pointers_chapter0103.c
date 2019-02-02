/* 
    Void pointers
    A pointer to void will have the same representation and memory alignment as a pointer to char.
    A pointer to void will never be equal to another pointer. However, two void pointers assigned a NULL value will be equal.

    If a pointer is declared as global or static, it is initialized to NULL when the program starts.
*/

#include <stdio.h>

int *globalpi; /* initialized to NULL */

void run()
{
    int n = 4;
    int *pi = &n;
    printf("Value of pi: %p\n", pi);
    void *pv = pi;
    pi = (int *) pv;
    printf("Value of pi: %p\n", pi);

    /* size_t is predefined pointer type */
    size_t size = sizeof(void *); /* Legal */
    size_t size = sizeof(void); /* Illegal */

    int *staticpi; /* initialized to NULL */

}

int main()
{
    run();
    return 0;
}