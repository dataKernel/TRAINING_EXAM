#include <stdio.h>

void    ft_utlimate_ft(int *********n)
{
    return ;
}

int     main(void)
{
    //declaration
    int     n;
    int     *a;
    int     **b;
    int     ***c;
    //assignation
    n = 42;
    a = &n;
    b = &a;
    c = &b;
    //test
    printf("valeur directe: %i\n", n);
    printf("valeur sous ptr: %p\n", a);
    printf("valeur sous ptr (assignation): %p\n", b);
    printf("valeur sous ptr (assignation): %p\n", c);
    return(0);
}
