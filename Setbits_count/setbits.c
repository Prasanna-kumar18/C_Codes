/*
 * setbits.c
 *
 *  Created on: 10-Jul-2023
 *      Author: Prasanna Kumar
 */
#include <stdio.h>

int main()
{
    int num,count;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num)
        {
            count += num & 1;
            num >>= 1;
        }
    printf("Number of set bits: %d\n", count);
    return 0;
}




