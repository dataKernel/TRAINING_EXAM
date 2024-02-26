#include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}
//abcde = edcba

char    *ft_strrev(char *str)
{
    int     i;
    int     j;
    char    tmp;

    i = 0;
    j = ft_strlen(str) - 1;
    while(i < ft_strlen(str) / 2)
    {
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        j--;
        i++;
    }
    return(str);
}

int     main(void)
{
    char    t[10] = "abcde";
    ft_strrev(t);
    printf("str rev:%s", t);
    return(0);
}