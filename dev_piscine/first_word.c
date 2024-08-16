#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
//./a.out toto est la
int     main(int argc, char *argv[])
{
    int     i;
    int     j;

    i = 1;
    if(argc != 2)
    {
        ft_putchar('\n');
        return(0);
    }
    while(i < 2)
    {
        j = 0;
        while(argv[i][j])
        {
            if(argv[i][j] == ' ')
            {
                ft_putchar('\n');
                return(0);
            }
            ft_putchar(argv[i][j]);
            j++;
        }
        i++;
    }
    ft_putchar('\n');
    return(0);
}