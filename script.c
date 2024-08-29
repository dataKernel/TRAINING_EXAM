#include <stdio.h>
#include <string.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}

char    *ft_strncat(char dst[], char *src, int nb)
{
    int     indexSrc = 0;
    int     indexDst = ft_strlen(dst);

    while(indexSrc < nb && src[indexSrc])
    {
        dst[indexDst] = src[indexSrc];
        indexDst++;
        indexSrc++;
    }
    dst[indexDst] = '\0';

    return(dst);
}

int     main(void)
{
    char    tab[10] = "abc";
    char    *src = "desdmflkj";

    ft_strncat(tab, src, 2);
    printf("%s", tab);
    
    return(0);
}