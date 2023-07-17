#include <stdio.h>

void    ft_strcpy(char *dst, char *src)
{
    int     i;

    i = 0;
    if(src == NULL)
        return;
    while(src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}

int     main(void)
{
    char    dst[10];

    ft_strcpy(dst, "toto");
    return(0);
}