#include<stdio.h>  
  
#define SWAP(a, b, temp) temp = a; a = b; b = temp;  //Defining macro with SWAP as function name with three arguments
  
int main()  
{  
    int x, y, temp;  
  
    printf("\nEnter 2 integer numbers\n");  
    scanf("%d%d", &x, &y);  
  
    printf("Before swapping: x = %d and y = %d\n", x, y);  //Printing the user input values Before swapping
  
    SWAP(x, y, temp);  //Calling the macro function
  
    printf("After swapping: x = %d and y = %d\n\n", x, y);  //Printing the user input values After swapping
  
    return 0;  
}  