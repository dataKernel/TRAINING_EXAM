#include <stdio.h>

void    ft_draw_square(int size)
{
    int     i;
    int     j;

    i = 0;
    while(i < size)
    {
        j = 0;
        while(j < size)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
}

int     ft_atoi(char *str)
{
    int     result;
    int     i;

    result = 0;
    i = 0;
    while(str[i] < '0' || str[i] > '9')
        i++;
    while(str[i])
    {
        result = result * 10 + str[i] - '0';
        i++;
    }
    return(result);
}

int     main(int argc, char **argv)
{
    int     argument;

    argument = ft_atoi(argv[1]);
    ft_draw_square(argument);
    return(0);
}