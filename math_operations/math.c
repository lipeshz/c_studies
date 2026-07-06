/*
    Arithmetic operators allow us to make math operations
*/

#include <stdio.h>

int main(){
    int x = 2;
    int y = 3;
    int z = 0;

    z = x + y; // Sum
    z = x - y; // Subtract
    z = x * y; // Multiply
    z = x / y; // Divide | If you wanna work with decimal portions, use float data type.
    z = x % y; // Remainder | If you wanna work with decimal portions, use float data type.
    z++; // Increments by one.
    z--; // Decrements by one.

    // Short operators
    z+=1;
    z-=1;
    z*=2;
    z/=2;

    printf("%d\n", z);

    return 0;
}