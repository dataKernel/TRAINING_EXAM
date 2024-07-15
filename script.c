#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int     main(void)
{
    int     div = 0;
    int     mod = 0;

    printf("PRE(nbr): div_%i, mod_%i\n", div, mod);
    ft_div_mod(4, 2, &div, &mod);
    printf("POST(nbr): div_%i, mod_%i\n", div, mod);
    return(0);
}