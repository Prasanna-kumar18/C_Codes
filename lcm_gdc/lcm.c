/*
 * lcm.c
 *
 *  Created on: Jul 14, 2023
 *      Author: Prasanna Kumar
 */

#include <stdio.h>

int findGCD(int num1, int num2) {	//12 15
    while (num2 != 0)
    {
        int temp = num2;		// temp = 15, 12
        num2 = num1 % num2;		// num2 = 12, 3
        num1 = temp;			//num1 = 15, 12
    }
    return num1;
}

int findLCM(int num1, int num2) {
    int gcd = findGCD(num1, num2);
    int lcm = (num1 * num2) / gcd;
    return lcm;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int lcm = findLCM(num1, num2);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}



