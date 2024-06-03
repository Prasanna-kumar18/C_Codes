/*
 * str_telephone.c
 *
 *  Created on: 10-Oct-2022
 *      Author: Prasanna Kumar
 */



#include<stdio.h>
#include<string.h>

struct TELEPHONE        //ceraring the structure name TELEPHONE with three array variables
    {
        char first_name[20];
        char middle_name[20];
        char last_name[20];
        int number;
    };

typedef struct TELEPHONE DATA;  //Creating access variable DATA for the structure.

int main()
    {

        DATA d[3] = {{"Joseph","Louis ","lagrange",90345},{"Jean","Robert","Argand",89765},{"Carl","Freidrich","Gauss",80654}};

        printf("The last name of first data is %c",d[0].first_name[0]);
    }
