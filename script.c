#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
    int     res = 1;
    int     i = 1;

    while(i < nb)
    {
        res *= i;
        i++;
    }
    return(res);
}

int     main(void)
{
    printf("res: %i", ft_iterative_factorial(4));
    return(0);
}