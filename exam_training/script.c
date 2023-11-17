#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_swap(int *a, int *b)
{
    int     temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int     main(void)
{
    int     a = 10;
    int     b = 29;

    printf("a:%i b:%i\n", a, b);
    ft_swap(&a, &b);
    printf("a:%i b:%i", a, b);
    return(0);
}