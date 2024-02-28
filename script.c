#include <stdio.h>

int     ft_iterative_factorial(int nb)
{
    int     res;
    int     i;

    res = 1;
    i = 0;
    while(i < nb)
    {
        res = res * (i + 1); 
        i++;
    }
    return(res);
}

int     main(void)
{
    printf("%i", ft_iterative_factorial(3));
    return(0);
}