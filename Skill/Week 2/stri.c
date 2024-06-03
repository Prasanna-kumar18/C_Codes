#include <stdio.h>
#include <string.h>

/*struct record
{

};*/

//typedef struct record rec;

int main()
{
char fst_name[3][10] = {"Joseph","Jean","Carl"};
char mid_name[3][10] = {"Louis","Robert","Freidrich"};
char sur_name[3][10] = {"lagrange","Argand","Gauss"};
int num[5] = {90345,89765,80654};
char temp[10],temp1[10];

printf("%c \n",fst_name[0][0]);
printf("%c \n",mid_name[1][0]);
printf("%c \n",sur_name[2][0]);
printf("%d \n",num[0]);
//printf("%s",sur_name[0]);

int n = strlen(sur_name),i,j;


/*for (i = 0; i < n-1; i++)
{
for (j = i+1; j < n; j++)
{
if (sur_name[0][0]>sur_name[1][0])
{
temp = sur_name[i];
sur_name[i] = sur_name[j];
sur_name[j] = temp;
}
}
}*/

strcpy(temp,sur_name[0]);
printf("%s",temp);

/*for(i=0;i<=3;i++)
{
for(j=i+1;j<=3;j++)
{
if(strcmp(sur_name[i],sur_name[j])>0)
{
strcpy(temp,sur_name[i]);
strcpy(sur_name[i],sur_name[j]);
strcpy(sur_name[j],temp);
}
}
}

printf("Order of Sorted Strings:");
for(i=0;i<=3;i++)
{
printf(sur_name[i]);
}

printf("%d",n);*/

return 0;
}