#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int     index;

    index = 0;
    while(str[index])
    {
        ft_putchar(str[index]);
        index++;
    }
}

void    ft_atoi(int nbr)
{
    int     oldNbr;
    int     i;

    oldNbr = nbr;
    i = 1;
    while(nbr >= 10)
    {
        nbr /= 10;
        i *= 10;
    }
    while(i >= 1)
    {
        ft_putchar('0' + oldNbr / i % 10);
        i /= 10;
    }
}

int     main(void)
{
    int     i;

     i = 0;
    while(i <= 100)
    {
        if(i % 3 == 0 && i % 5 == 0)
            ft_putstr("fizzbuzz");
        else if(i % 3 == 0)
            ft_putstr("fizz");
        else if(i % 5 == 0)
            ft_putstr("buzz");
        else
            ft_atoi(i);
        ft_putchar('\n');
        i++;
    }
    return(0);
}