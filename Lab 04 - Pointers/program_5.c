#include <stdio.h>

int main(){

    long int x = 100;
    long int *y;
    long int **z;

    printf("\n&x = %p\n", &x);
    y = &x; // y = address of x = 8000
    printf("y = %p\n", y);
    
    printf("\n&y = %p\n", &y);
    z = &y; // z = address of y = 5000
    printf("z = %p\n", &y);

    printf("\nx = %ld\n", x);
    x++;    // x = x + 1 = 101
    printf("x++ = %ld\n", x);

    printf("\nx = %ld\t*y = %ld\n", x, *y);
    *y = *y++;  // increment y, then assign the value of x (101) to x; only the value of y has changed
    printf("*y = %ld\n", *y);

    //-------pass-------//
    printf("\n*z = %p\t&y = %p\n", *z, &y);
    *z = *z++;  // address of y = address of y + 1(4 bytes) = 5000+1(4)=5004
    printf("*z = %p\n", *z);

    printf("\n&y = %p\tz = %p\n", &y, z);
    z++;    // address of y = address of y + 1(4bytes) = 5004 + 1(4) = 5008
    printf("z++ = %p\n", z);

    /*5. Fill out the memory map after the code has executed.*/
    /*Map after code executes
    top     ---------------------
            |                   |
            |                   |
            |                   |
            |                   |
            |                   |
            |                   |
            ---------------------
    8000    |   garbage value   | x
            ---------------------
            |                   |
            ---------------------
    5000    |        8004       | y
            ---------------------
            |                   |
            ---------------------
    2000    |        5004       | z
            ---------------------
            |                   |
            ---------------------
    */


    return 0;
}
