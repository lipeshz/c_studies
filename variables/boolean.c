#include <stdio.h>
#define bool int
#define true 1
#define false 0

int main(){
    // boolean stores true or false (also means 1 or 0)
    // format specifier: %d
    bool isOnline = 1;

    if(isOnline){
        printf("You are ONLINE.");
    }else{
        printf("You are OFFLINE");
    }
    
    return 0;
}
