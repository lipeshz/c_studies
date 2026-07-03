#include <stdio.h>

int main(){
    // integer variables contains only whole numbers
    // format specifier: %d, %i
    int age = 21;
    int year = 2026;
    int quantity = 10;

    printf("You are %d years old.\n", age);
    printf("The year is %i\n", year);
    printf("You have %d beans.", quantity);

    return 0;
}