#include <stdio.h>

int main(){

    // float variables contains decimal values
    // format specifier: %f

    float salary = 2400.50;
    printf("Your salary is %f\n", salary);

    // we use %.{number}f to trunk decimal digits quantity
    printf("Your trunked salary is %.2f\n", salary);

    // if you must print big decimal digits, use double type
    double pi = 3.14159265359;
    printf("The value of pi is %lf\n", pi); // lf means "long float"

    return 0;
}