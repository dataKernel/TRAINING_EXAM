#include <stdio.h>


void    ft_sort_integer_table(int *tab, int size)
{
    int     i;
    int     j;
    int     tmp;

    i = 0;
    while(i < size)
    {
        j = i + 1;
        while(j < size)
        {
            if(tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}

int     main(void)
{
    int     tab[5] = {-2, 0, 34, 99, 1};
    int     i;
    //check tab 
    for(i = 0; i < 5; i++)
        printf("[%i]:%i\n", i, tab[i]);
    ft_sort_integer_table(tab, 5);
    for(i = 0; i < 5; i++)
        printf("[%i]:%i\n", i, tab[i]);
    return(0);
}