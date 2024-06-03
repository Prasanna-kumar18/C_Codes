/*
 * main.c
 *
 *  Created on: Apr 18, 2024
 *      Author: Prasana
 */

#include <stdio.h>

int main() {
    char str[] = "Hey i am using Windows 11 in my pc";
    char OS[20];
    int version = 0;


    // Use sscanf to extract data from the string
    sscanf(str, "Hey i am using %s %d in my pc", OS, &version);

    // Print the extracted data
    printf("OS Name: %s\n", OS);
    printf("Version: %d\n", version);

    return 0;
}
