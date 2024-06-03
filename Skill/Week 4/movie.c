#include<stdio.h>
#include<string.h>

struct MOVIE        //Creating the structure name MOVIE with three variables
    {
        char movie_name[20];
        char director_name[20];
        int release_year;
    };

typedef struct MOVIE data;  //Creating access variable name data for the structure MOVIE.

int main()
    {
        int result, flag;
        char ip_name[20];
        data d[3] = {{"Jurassic Park","Spielberg",1995},{"Spiderman", "Sam Raimi", 2002},{"Interstellar","Christopher Nolan",2019}};

        printf("\nEnter the Movie name to be searched: ");
        gets(ip_name);

        for (int i=0; i<3; i++)
            {
                result = strcmp(ip_name,(d[i].movie_name)); //Compare if the given input name with the given array.
                if(result==0)
                    {
                        printf("***************************************************");
                        printf("\n\nThe Movie Name is %s \n",d[i].movie_name);
                        printf("\nThe Movie Director Name is %s \n", d[i].director_name);
                        printf("\nThe Movie Release Year is %d \n",d[i].release_year); 
                        flag = 1;   //Set flag once enters the loop
                    }
                          
            }
        if(flag!=1)     //Print this statement if not enter that loop.
            {
                printf("\nMovie Name is Not found in Database");
            }

    }