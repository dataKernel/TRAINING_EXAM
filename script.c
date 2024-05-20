#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    int     i;

    i = '0';
    while(i <= '9')
    {
        ft_putchar(i);
        i++;
    }
}

void    ft_check_is_neg(int nbr)
{
    if(nbr >= 0)
        ft_putchar('P');
    else
        ft_putchar('N');
}

int     main(void)
{
    ft_check_is_neg(0);
    ft_check_is_neg(-2);
    return(0);
}
