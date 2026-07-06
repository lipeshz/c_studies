/*
    Format specifier are tags that begin with % and define how the data will be displayed and formated (width, precision and flags).
*/

#define bool int
#define true 1
#define false 0
#include <stdio.h>

int main(){

    char name[] = "Filipe";
    char currency = '$';
    int age = 10;
    float salary = 2340.90;
    double pi = 3.14159265359;
    bool connected = true;

    printf("%s\n", name);
    printf("%c\n", currency);
    printf("%d\n", age);
    printf("%f\n", salary);
    printf("%lf\n", pi);
    printf("%d\n", connected);

    return 0;
}