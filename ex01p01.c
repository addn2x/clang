/*

    Given price transform into 
    bills (500, 200, 100, 50, 20, 10, 5, 2, 1)

*/

#include <stdio.h>

int main()
{
    const int fiftyBill = 50;
    const int twentyBill = 20;
    const int tenBill = 10;
    const int fiveBill = 5;
    const int twoBill = 2;
    const int oneBill = 1;

    int fifty = 0,
        twenty = 0,
        ten = 0,
        five = 0,
        two = 0,
        one = 0;

    int price = 150;

    printf("Given price is: %d\n", price);

    fifty = price / fiftyBill;
    price = price % fiftyBill;
    /* price %= fiftyBill; */

    twenty = price / twentyBill;
    price = price % twentyBill;
    /* price %= twentyBill; */

    ten = price / tenBill;
    price = price % tenBill;
    /* price %= tenBill; */

    five = price / fiveBill;
    price = price % fiveBill;
    /* price %= fiveBill; */

    two = price / twoBill;
    price = price % twoBill;
    /* price %= twoBill; */

    one = price / oneBill;
    price = price % oneBill;
    /* price %= oneBill; */

    printf("50: %d\n", fifty);
    printf("20: %d\n", twenty);
    printf("10: %d\n", ten);
    printf("5: %d\n", five);
    printf("2: %d\n", two);
    printf("1: %d\n", one);

    return 0;
}
