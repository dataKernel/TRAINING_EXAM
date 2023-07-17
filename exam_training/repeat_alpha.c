#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    lowcase_to_upcase(char *str)
{
    int     i;

    i = 0;
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
}

int     main(int argc, char *argv[])
{
    int     i;
    int     j;

    i = 0;
    if(argc != 2)
    {
        ft_putchar('\n');
        return(0);
    }
    lowcase_to_upcase(argv[1]);
    while(argv[1][i])
    {
        j = 0;
        while(j < argv[1][i] - ('a' - 1))
        {
            ft_putchar(argv[1][i]);
            j++;
        }
        i++;
    }
    ft_putchar('\n');
    return(0);
}