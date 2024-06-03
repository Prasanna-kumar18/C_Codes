#include <stdio.h>
#include <string.h>
  
int main()
{
   char a[100], b[100];
 
   printf("Enter the string for palindrome check \n");
   scanf("%s", a);
   /* Copy input string and reverse it*/
   strcpy(a, b);
   /* reverse string */
   strrev(b);
   /* Compare reversed string with input string */
   if(strcmp(a, b) == 0 )
      printf("%s is a palindrome.\n", a);
   else
      printf("%s is not a palindrome.\n", a);
       
   return 0;
}