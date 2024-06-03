#include<stdio.h>
#include<string.h>

int main()
    {
        char str[5];
        fgets(str,5,stdin);
        printf("%s",str);
        return 0;
    }