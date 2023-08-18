#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     i;

    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }    
}

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

int     main(void)
{
    char    *str = "lancelot";
    int     i;

    i = ft_strlen(str);
    while(i >= 0)
    {
        ft_putchar(str[i]);
        i--;
    }
    return(0);
}




