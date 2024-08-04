#include <stdio.h>
#include <stdbool.h>

#define PRENOM "Ambre"

bool    compare_strings(char *s1, char *s2)
{
    bool    check = true;
    int     i = 0;


    while(check && (s1[i] && s2[i]))
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
    int     i = 0;

    while(str[i])
    {
        printf("i:%i  char:%c", i, str[i]);
        i++;
    }
    return(0);
}

int     main(void)
{
    //return_iterations_firstname("un test avec Ambre et ambre et Ambre.");
    printf(compare_strings("laxcelot", PRENOM) ? "true" : "false");
    return(0);
}