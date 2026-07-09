#include <stdio.h>
#include <string.h>

int main(){
    char name[30] = "";
    int age = 0;
    float gpa = 0.0f;
    char grade = 'A';

    printf("Enter your name: ");
    // scanf("%s", &name); // & means memory address
    fgets(name, 30, stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your GPA: ");
    scanf("%f", &gpa);
    
    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Name: %s, age: %d, GPA: %.2f, grade: %c", name, age, gpa, grade);
}