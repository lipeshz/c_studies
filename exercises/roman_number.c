#include <stdio.h>

int main(){

    int numbers[256] = {
        ['I'] = 1,
        ['V'] = 5,
        ['X'] = 10,
        ['L'] = 50,
        ['C'] = 100,
        ['D'] = 500,
        ['M'] = 1000,
    };
    
    char roman[] = "MCMXCIV";
    int number = 0;
    for(int i = 0; roman[i]!='\0'; i++){
        if(numbers[roman[i]] < numbers[roman[i+1]]){
            number-=numbers[roman[i]];
        }else{
            number+=numbers[roman[i]];
        }
    }
    printf("%d", number);
    return 0;
}