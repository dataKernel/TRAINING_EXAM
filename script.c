#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(void)
{
    for(int i = 0; i < 3; i++)
        ft_putchar(i + '0');
    return(0);
}