#include <stdio.h>

int main(){
    int number = 1;
    int negativeNumber = -1;
    printf("%4d\n", number); // It adds a blank space before the number.
    printf("%04d\n", number); // It add zeros before the number.
    printf("%+d and %+d\n", number, negativeNumber); // It displays the number sign 

    float price = 19.99; // %.2f | .2: precision | 
    printf("%.2f\n", price); // It limits how many decimal numbers will be displayed.
    printf("%2.2f\n", price); // It adds a blank space before the number.

    return 0;
}