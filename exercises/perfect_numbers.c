#include <stdio.h>
#define TAM 100

int main(){
    for(int i = 1; i < TAM; i++){
        int sumDivisors = 0;
        for(int j = 1; j < i; j++){
            if(i % j == 0){
                sumDivisors+=j;
            }
        }

        if(sumDivisors == i){
            printf("%d\n", i);
        }
    }

    return 0;
}