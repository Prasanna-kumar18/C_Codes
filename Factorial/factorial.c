/*
 * factorial.c
 *
 *  Created on: 10-Jul-2023
 *      Author: Prasanna Kumar
 */

#include <stdio.h>

unsigned long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Factorial of numbers from 1 to 10:\n");
    for (num = 1; num <= 10; num++) {
        unsigned long fact = factorial(num);
        printf("%2d! = %lu\n", num, fact);
    }
    return 0;
}



