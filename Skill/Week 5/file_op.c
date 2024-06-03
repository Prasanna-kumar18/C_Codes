/* 5 b) Write a program to open a file named INVENTORY and store in it the following data.
Item name Number price quantity
A-1 111 29.15 115
B-2 124 34.00 120
C-3 245 31.76 105
Extend the program to read this data from the file INVENTORY and display the inventory table with the value of each item.
*/

#include<stdio.h>

int main()
    {
        FILE *f;        //Declaring file format and variable f created as pointer.

        //Code to Write the information to the file
        f=fopen("C:/Users/Prasanna Kumar/Documents/inventory.txt","w"); //opening file from the location and operation is given as write.
        if(f==NULL)         //check if the file is present in that location.
            {
                printf("Error");
            }
        else
            {
                
                fprintf(f,"%s\n","Item Name number price quantity");
                fprintf(f,"%s\n","A - 1 111 29.15 115");
                fprintf(f,"%s\n","B - 2 124 34.00 129");
                fprintf(f,"%s\n","C - 3 245 31.76 105");
                printf("\nThe Information is Successfully written in file. \n\n");
                fclose(f);      //closing the file.


                //Code for opening the file and read data from the file.
                f=fopen("C:/Users/Prasanna Kumar/Documents/inventory.txt","r");     //opening file from the location and operation is given as Read.
                printf("\n***Reading information from the File.*** \n\n");
                char c;         
                while(1)
                    {
                        c=fgetc(f);                 //storing the data in c by each character
                        if(c == EOF)                //once file reach EOF
                        break;
                        printf("%c",c);             //printing the data in console
                    }
                fclose(f);                          //closing the file
            }
        return 0;
    }