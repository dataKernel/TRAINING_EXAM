#include <stdio.h>

int    ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

int     ft_atoi(char *str)
{
    int     res;
    int     i;

    i = 0;
    res = str[i] - '0';
    while(i < ft_strlen(str) - 1)
    {
        res = res * 10 + (str[i + 1] - '0');
        i++;
    }
    return(res);     
}

int     main(void)
{
    int     n;

    n = ft_atoi("253");
    printf("%i", n);
    return(0);
}