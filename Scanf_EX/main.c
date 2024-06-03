/*
 * main.c
 *
 *  Created on: Apr 18, 2024
 *      Author: Prasana
 */

#include <stdio.h>

int main()
{
    int num1, num2;
    int scanfReturnValue; // Variable to store the return value of scanf

    // Prompt the user to enter two integers
    printf("Enter two integers separated by space: ");
    fflush(stdout);
    // Use scanf for formatted input
    scanfReturnValue = scanf("%d %d", &num1, &num2);

    // Check if scanf successfully read two integers
    if (scanfReturnValue == 2) {
        // If scanf successfully read two integers, print their sum
        int sum = num1 + num2;
        printf("Sum of %d and %d is: %d\n", num1, num2, sum);
    } else {
        // If scanf failed to read two integers, print an error message
        printf("Error: Please enter two integers.\n");
    }

    return 0;
}

