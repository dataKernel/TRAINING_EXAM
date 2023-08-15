#include <stdio.h>
#include <stdlbool.h>

bool    check_is_nbr(int nbr)
{
    double  res;

    res = (double) nbr;
    if (res > 2147483647 || res < -2147483648)
        return(true);
    return(false);
}

int     max(int *tab, unsigned int len)
{
    int     res;
    int     i;
    int     j;

    i = 0;
    res = tab[i];
    while(i < len)
    {
        j = 0;
        while(j < len)
        {
            if(res < tab[j])
                res = tab[j];
            j++;
        }
        i++;
    }
    return(res);
}

int     main(void)
{
    int     tab[4] = {0, 1, 2, 3};
    printf("%i", max(tab, 4));
    return(0);
}