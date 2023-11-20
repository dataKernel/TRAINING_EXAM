#include <stdio.h>

#define SIZE_TAB 5

void    ft_ultitmate_div_mod(int *a, int *b)
{
    int     temp;

    temp = *a;
    *a /= *b;
    *b = temp % *b;
}

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

void    ft_rev_tab(int *tab, int size)
{
    int     temp;
    int     last;
    int     i;

    i = 0;
    last = size - 1;
    while(i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[last];
        tab[last] = temp;
        i++;
        last--;
    }
}

int     main(void)
{
    int     tab[SIZE_TAB] = {12, -4, 0, 1, 32};

    //check tab avant func
    for(int i = 0; i < SIZE_TAB; i++)
        printf("tab[%i]->%i__", i, tab[i]);
    printf("\n");
    ft_rev_tab(tab, SIZE_TAB);
    for(int i = 0; i < SIZE_TAB; i++)
        printf("tab[%i]->%i__", i, tab[i]);
    return(0);
}