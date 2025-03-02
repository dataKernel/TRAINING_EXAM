#include <stdio.h>
#include "ft_header.h"

int     ft_strlen(char *str)
{
    int     i = 0;

    while(str[i])
        i++;
    return(i);
}

int     count_words(char *str, char del) 
{
    int     count = 0;
    if(!str || ft_strlen(str) < 0)
        return(-1);
    for (int i = 0; str[i]; i++)
    {
        if(str[i] == del && str[i - 1] != del && i != 0 && i != ft_strlen(str) - 1)
            count++;
    }
    return(count + 1);
}

char    **ft_split_whitespaces(char *str, char c)
{
    char    **tabStr = NULL;
    char    *str = NULL;

    if(!str || ft_strlen(str) == 0)
        return(NULL);
    tabStr = malloc(sizeof(char *) * (count_words(str, c) + 1));
    if(!tabStr)
        return(NULL);
    
    return(tabStr);
}

int     main(int ac, char **av)
{
    char    **tab = ft_split_whitespaces("ceci est un test", SP);
    
    if(!tab)
        printf("erreur alloc");
    
    return(0);
}