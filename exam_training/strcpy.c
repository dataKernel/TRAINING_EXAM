#include <stdio.h>

char    *ft_strcpy(char *dst, const char *src)
{
    int     i;

    i = 0;
    if(src == NULL)
        return dst;
    while(src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(dst);
}

int     main(void)
{
    char    dst[42];
    ft_strcpy(dst, "42 is a school");
    printf("%s", dst);
    return(0);
}