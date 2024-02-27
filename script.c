#include <stdio.h>
#include <stdbool.h>


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
    bool    check;

    int     res;
    int     i;

    check = false;
    i = 0;
    res = 0;
    if(str[i] == '-')
    {
        check = true;
        i++;
    }
    while(i < ft_strlen(str))
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    if(check)
        return(res * -1);
    return(res);
}

int     main(void)
{
    int     n;

    n = ft_atoi("-123");
    printf("%i", n);
    return(0);
}