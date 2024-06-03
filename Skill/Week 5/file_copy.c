/* 5 d) Write a program to copy contents of one file to another. While doing so replace all 
lowercase characters to their equivalent uppercase characters. */

#include<stdio.h>

int main()

    {

        FILE *f1, *f2;                //Declaring file format and variable f1 & f2 created as pointer
        char ch;                        //declaring datatype of variable

        f1 = fopen("C:/Users/Prasanna Kumar/Documents/source file.txt", "r");  //opening file from the location and operation is given as read.

        if (f1 == NULL)                 //if the file is not found in that location it print file does not exit

            {

                puts("File does not exist.");

                exit(1);

            }

        f2 = fopen("C:/Users/Prasanna Kumar/Documents/destination file.txt", "w");  //opening file from the location and operation is given as write.

        if (f2 == NULL)

            {

                puts("File does not exist.");

                fclose(f1);

                exit(1);

            }

        while((ch=fgetc(f1))!=EOF)          //here we are looping to transfer data from f1 to ch.

            {

                ch = toupper(ch);           //using toupper function, converting the char in ch variable in uppercase.

                fputc(ch,f2);               //here putting the data in char ch into the file f2.

            }

        printf("\nFile successfully copied.");

        return 0;

    }