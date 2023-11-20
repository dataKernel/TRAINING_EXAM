#include <stdio.h>

void    ft_ultitmate_div_mod(int *a, int *b)
{
    int     temp;

    temp = *a;
    *a /= *b;
    *b = temp % *b;
}

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

void    ft_rev_tab(int *tab, int size)
{
    int     i;

    i = 0;
    
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(void)
{
    int     tab[5] = {12 -4, 0, 1, 32};
    int     a;
    int     b;

    a = 10;
    b = 2;
    ft_ultitmate_div_mod(&a, &b);
    return(0);
}