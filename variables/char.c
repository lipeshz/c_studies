#include <stdio.h>

int main(){

    // char variables contains exactly one character
    // format specifier: %c, %s (array)

    char grade = 'A';
    char apples = '4';
    char symbol = '$';
    printf("Your grade is %c\n", grade);
    printf("You have %c apples\n", apples);
    printf("My favorite symbol is %c\n", symbol);

    // if you wanna store more than one character, you must create an array of strings
    char name[] = "lipeshz";
    char food[] = "Pizza";
    char email[] = "email@email.com";
    printf("My name is %s\n", name);
    printf("My favorite food is %s\n", food);
    printf("My email is email is %s\n", email);

    return 0;
}