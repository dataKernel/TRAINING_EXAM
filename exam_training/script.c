#include <stdio.h>

void    ft_utlitmate_div_mod(int *a, int *b)
{
    int     temp;

    temp = *a;
    *a /= *b;
    *b = temp % *b;
}

int     main(void)
{
    int     a;
    int     b;

    a = 10;
    b = 2;
    ft_utlitmate_div_mod(&a, &b);
    printf("a:%i__b:%i", a, b);
    return(0);
}