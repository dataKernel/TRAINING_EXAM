#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int     main(void)
{
    int     div;
    int     mod;

    ft_div_mod(4, 2, &div, &mod);
    printf("%i_%i", div, mod);
    return(0);
}