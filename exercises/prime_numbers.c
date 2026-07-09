#include <stdio.h>
#define NUMBERS 20

int main(){
    int numbers[NUMBERS];
    for(int i = 1; i <= NUMBERS; i++){
        int divisors = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                divisors+=1;
            }

            if(divisors > 2){
                break;
            }
        }

        if(divisors == 2){
            printf("%d\n", i);
        }
    }

    return 0;
}