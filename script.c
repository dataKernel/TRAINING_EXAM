#include <stdio.h>

int     ft_recursive_factorial(int nb)
{
    if(nb == 0)
        return(0);
    if(nb == 1)
        return(1);
    return(nb * ft_recursive_factorial(nb - 1));
}

int     main(void)
{
    printf("res: %i", ft_recursive_factorial(4)); //24
    return(0);
}
