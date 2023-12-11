#include <stdio.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

char    *ft_strrev(char *str)
{
    char    temp;
    int     size_str;
    int     i;

    size_str = ft_strlen(str);
    i = 0;
    while(i < size_str / 2)
    {
        temp = str[i];
        str[i] = str[size_str - 1];
        str[size_str - 1] = temp;
        size_str--;
        i++;
    }
    return(str);
}

int     main(void)
{
    char    tab[5] = "datas";

    ft_strrev(tab);
    printf("%s", tab);
    return(0);
}