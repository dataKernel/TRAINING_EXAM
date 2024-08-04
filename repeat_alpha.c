#include <stdio.h>
#include <stdbool.h>

#define PRENOM "Ambre"

bool    compare_strings(char *s1, char *s2)
{
    bool    check = true;
    int     i = 0;


    while(check && (s1[i] || s2[i]))
    {
        if(s1[i] == s2[i])
            check = true;
        else
            check = false;
        i++;
    }
    return(check);
}

int     return_iterations_firstname(char *str)
{
    bool    check;
    int     i = 0;
    int     j;

    while(str[i])
    {
        i++;
    }
    return(0);
}

int     main(void)
{
    printf(compare_strings("laxcelot", PRENOM) ? "true" : "false");
    return(0);
}