#include<stdio.h>

int main()
    {
        int marks[50] = {43,65,51,27,79,11,56,61,82,9,25,65,36,07,49,55,73,74,81,49,37,40,49,16,75,87,91,33,24,87,65,21,98,65,42,9,56,8,56,67,45,04,34,78,26,35,67,79,45};
        static int ones, tens, twenty, thirty, forty, fifty, sixty, seventy, eighty, ninety, hundred;

        for(int i=0; i<50; i++)
            {
                if(marks[i]>=0 && marks[i] <10)
                    {
                        ones++;
                    }
                else if(marks[i]>=10 && marks[i] <20)
                    {
                        tens++;
                    }
                else if(marks[i]>=20 && marks[i] <30)
                    {
                        twenty++;
                    }
                else if(marks[i]>=30 && marks[i] <40)
                    {
                        thirty++;
                    }
                else if(marks[i]>=40 && marks[i] <50)
                    {
                        forty++;
                    }
                else if(marks[i]>=50 && marks[i] <60)
                    {
                        fifty++;
                    }
                else if(marks[i]>=60 && marks[i] <70)
                    {
                        sixty++;
                    }
                else if(marks[i]>=70 && marks[i] <80)
                    {
                        seventy++;
                    }
                else if(marks[i]>=80 && marks[i] <90)
                    {
                        eighty++;
                    }
                else if(marks[i]>=90 && marks[i] <100)
                    {
                        ninety++;
                    }
                else if(marks[i]==100)
                    {
                        hundred++;
                    }
                else
                    {
                        printf("Invalid Mark\n");
                    }
            }
        printf("\nNumber of Students Scored From 0 to 10 is: %d \n",ones);
        printf("Number of Students Scored From 10 to 20 is: %d \n",tens);
        printf("Number of Students Scored From 20 to 30 is: %d \n",twenty);
        printf("Number of Students Scored From 30 to 40 is: %d \n",thirty);
        printf("Number of Students Scored From 40 to 50 is: %d \n",forty);
        printf("Number of Students Scored From 50 to 60 is: %d \n",fifty);
        printf("Number of Students Scored From 60 to 70 is: %d \n",sixty);
        printf("Number of Students Scored From 70 to 80 is: %d \n",seventy);
        printf("Number of Students Scored From 80 to 90 is: %d \n",eighty);
        printf("Number of Students Scored From 90 to 100 is: %d \n",ninety);
        printf("Number of Students Scored 100 is: %d \n",hundred);




    }
