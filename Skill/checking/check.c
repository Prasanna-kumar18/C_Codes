#include<stdio.h>
#include<stdarg.h>

void f(char**);

main()
{
    char *argv[] = {"ab", "cd", "ef", "gh", "ij", "kl"};
    f(argv);

}

void f(char **p)
    {
        char *t;
        t = (p+=sizeof(int))[-1];
        printf("%s", t);

    }