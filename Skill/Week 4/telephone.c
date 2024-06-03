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

void main()
    {
      
        DATA d[3] = {{"Joseph","Louis ","lagrange",90345},{"Jean","Robert","Argand",89765},{"Carl","Freidrich","Gauss",80654}};

    //Rearrangine the structure array based on ascending order.
        for(int i=0;i<=2;i++)
	    {
	        for(int j=i+1;j<=2;j++)
	        {
	            if(strcmp(d[i].last_name,d[j].last_name)>0)
	            {
                    //For last name
	                strcpy(temp,d[i].last_name);       
	                strcpy(d[i].last_name,d[j].last_name);
	                strcpy(d[j].last_name,temp);

                    //For Middle Name
                    strcpy(temp,d[i].middle_name);
	                strcpy(d[i].middle_name,d[j].middle_name);
	                strcpy(d[j].middle_name,temp);

                    //For First Name
                    strcpy(temp,d[i].first_name);
	                strcpy(d[i].first_name,d[j].first_name);
	                strcpy(d[j].first_name,temp);

                    //For Telephone Number
                    temp_num = d[i].number;
                    d[i].number = d[j].number;
                    d[j].number = temp_num;
                    
	            }
	        }
	    }
        //Printing the sorted text with for loop.
        printf("\nOrder of Sorted Telephone Numbers:\n");
	    for(int i=0;i<=2;i++)
	        {
	            printf("%s %c %c %d\n",d[i].last_name, d[i].first_name[0], d[i].middle_name[0], d[i].number);
	        }
    }
