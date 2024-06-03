/*
 * str_aplha.c
 *
 *  Created on: 10-Oct-2022
 *      Author: Prasanna Kumar
 */


#include<stdio.h>
#include<string.h>

void main()
{
   int i,j,n;
   char str[100][100],tmp[100];
   printf("Enter number of names :\n");
   fflush(stdout);
   scanf("%d",&n);
   printf("Enter names in any order:\n");
   fflush(stdout);
   for(i=0;i<n;i++){
      scanf("%s",str[i]);
   }
   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(tmp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],tmp);
         }
      }
   }
   printf("\nThe sorted order of names are:\n");
   fflush(stdout);
   for(i=0;i<n;i++){
      printf("%s\n",str[i]);
   }

}
