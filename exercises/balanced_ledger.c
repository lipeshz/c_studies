/*

1. The "Balanced Ledger" Challenge

Concept: for loops, if statements, array iteration.

Problem: You are given an array of integers called transactions, where each integer represents a bank deposit (positive) or a withdrawal (negative).
Starting with a balance of 0, iterate through the array.

If a withdrawal would cause the balance to drop below 0, ignore that transaction.

Goal: Return the final balance and the count of ignored transactions as a pair (or list).
*/

#include <stdio.h>

int main(){

    int transactions[6] = {120, -50, -20, 30, 80, -100};
    int finalBalance[2] = {0, 0};

    for(int i = 0; i < 5; i++){
        if((finalBalance[0] + transactions[i]) < 0){
            finalBalance[1] += 1;
            continue;
        }

        finalBalance[0] += transactions[i];
    }

    return *finalBalance;
}