#include <stdio.h>
#include <ctype.h>  //Header file to use isupper and islower keyword

int main()
{
    char c;

    printf("\nEnter any character: ");    //Get Input Character from Console
    scanf("%c", &c);

    if(isupper(c))      //checking whether input character is uppercase
        {
            printf("\n'%c' is an uppercase alphabet.\n\n", c);
        }
    else if(islower(c)) //checking whether input character is lowercase
        {
            printf("\n'%c' is a lowercase alphabet.\n\n", c);
        }
    else
        {
            printf("\n'%c' is not an alphabet.\n\n", c);
        }

}