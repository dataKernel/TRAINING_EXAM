#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
    int     res = 1;
    int     i = 1;

    if(nb == 0)
        return(0);
    while(i < nb)
    {
        res *= i + 1;
        i++;
    }
    return(res);
}

int     main(void)
{
    printf("res: %i", ft_iterative_factorial(0));
    return(0);
}