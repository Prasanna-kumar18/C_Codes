#include<stdio.h>

#define window 3

void main()
{
    int indx =0;
    float value = 0;
    float sum = 0;
    float reading[window] = {34.5, 34.5, 34.5};
    float average_value = 0;
    float echo_pin = 34.5;

while (indx < 4)
{
        sum = sum - reading[indx]; // Remove the oldest entry from the sum
        value = (echo_pin); // Read the next sensor value
        reading[indx] = value; // Add the newest reading to the window
        sum = sum + value; // Add the newest reading to the sum
        indx = (indx+1) % window; // Increment the index, and wrap to 0 if it exceeds the window size

        average_value = sum / window; // Divide the sum of the window by the window size for the result
        //indx ++;
}
}

