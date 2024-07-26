#include <stdio.h>

#define SIZE_TAB    5

void    ft_sort_integer_table(int *tab, int size)
{
    int     temp;
    int     minPos;

    for(int i = 0; i < size - 1; i++)
    {
        minPos = i;
        for(int j = i + 1; j < size; j++)
        {
            if(tab[j] < tab[minPos])
                minPos = j;
        }
        temp = tab[i];
        tab[i] = tab[minPos];
        tab[minPos] = temp;
    }
}

int     main(void)
{
    int     tab[5] = {0, -2, -4, 12, 42};
    for(int i = 0; i < SIZE_TAB; i++)
    {
        printf("(pre)array[%i]:%i\n", i, tab[i]);
    }
    ft_sort_integer_table(tab, SIZE_TAB);   
    printf("\n\n");
    for(int i = 0; i < SIZE_TAB; i++)
    {
        printf("(pre)array[%i]:%i\n", i, tab[i]);
    }
    return(0);
}