/* Week 4 Session 1

Argc & arg v values*/


#include <stdio.h>

void main(int argc, char *argv[])
    {
        printf("\n Name of the program is %s", argv[0]);
        printf("\nThe value of Argc is %d", argc);
        if(argc<2)
            {
                printf("\nNo argument is passed through command");
            }
        else
            {
                printf("The value of Argument 1 is %s", argv[1]);
            }
    }