#include <stdio.h>
#include <string.h>

int main()
{
    char text[20];
    int i, length;
    int result = 0;
    
    printf("\nEnter a string: ");  //Get the input from user to check palindrome
    scanf("%s", text);          //Store the user text in text variable
    
    length = strlen(text);
    
    for(i=0;i < length ;i++){
        if(text[i] != text[length-i-1]){    //Check weather the character is same on both sides.
            result = 1;
            break;
           }
        }
    
    if (result) {
        printf("\n%s is not a palindrome\n\n", text);
    }    
    else {
        printf("\n%s is a palindrome\n\n", text);
    }
    return 0;
}