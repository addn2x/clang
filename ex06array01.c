#include <stdio.h>

int main()
{

    int integers[7] = {3, 5, 6, 7, 1, 1, 0};
    float floats[4] = {3.2, 6.0, 5.3, 1.1};

    printf("integers[%d] = %d\n", 0, integers[0]);
    printf("floats[%d] = %.2f\n", 0, floats[0]);

    printf("integers[%d] = %d\n", 4, integers[4]);
    integers[4] = 8;
    printf("integers[%d] = %d\n\n", 4, integers[4]);

    printf("floats[] = ");
    for (int i = 0; i < 4; ++i)
    {
        printf("%.2f, ", floats[i]);
    }
    printf("\n\n");

    printf("integers[] = ");
    for (int i = 0; i < 7; ++i)
    {
        printf("%d, ", integers[i]);
    }
    printf("\n");

    for (int i = 0; i < 7; ++i)
    {
        integers[i] += 3;
    }

    printf("integers[] = ");
    for (int i = 0; i < 7; ++i)
    {
        printf("%d, ", integers[i]);
    }
    printf("\n");

    return 0;
}