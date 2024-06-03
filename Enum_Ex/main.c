/*
 * main.c
 *
 *  Created on: Apr 18, 2024
 *      Author: Prasana

#include <stdio.h>

// Define an enumeration type called "Day" with constants representing days of the week
enum Day {
    SUNDAY=1, MONDAY=2, TUESDAY=3, WEDNESDAY=4, THURSDAY=5, FRIDAY=6, SATURDAY=7
};

typedef enum Day WEEKS;		//Assigning Alias name for enum Day

int main() {
   // Declare variables of typedef WEEKS
	WEEKS today;

    // Assign values using enum constants
    today = MONDAY;

    // Output the values
    printf("Today is %d\n", today);       // Output: Today is 2

    return 0;
}
 */


#include <stdio.h>

// Define a typedef alias for int
typedef int Integer;

// Define a typedef alias for char
typedef char Character;

int main() {
    // Declare variables using the typedef aliases
    Integer num = 42;
    Character letter = 'A';

    // Print out the values
    printf("Number: %d\n", num);
    printf("Letter: %c\n", letter);

    return 0;
}



