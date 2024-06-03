/*
 * main.c
 *
 *  Created on: May 6, 2024
 *      Author: Prasana
 */


#include <stdio.h>
#include <stdbool.h>

int main() {
    bool is_raining = true;
    bool is_sunny = false;

    // Example usage of bool variables
    if (is_raining)
    {
        printf("It's raining outside.\n");
    } else
    {
        printf("It's not raining outside.\n");
    }

    if (is_sunny)
    {
        printf("It's sunny outside.\n");
    } else {
        printf("It's not sunny outside.\n");
    }

    // Example usage of boolean expressions
    bool is_cold = true;
    bool is_windy = false;

    if (is_cold && !is_windy)
    {
        printf("It's cold but not windy.\n");
    }

    return 0;
}
