#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int     i = 0;

    while (str[i])
        i++;
    return (i);
}

char *ft_strrev(char *str)
{
    char              temp;

    const int       sizeStr = ft_strlen(str);
    int                 i = 0;
    int                 j = sizeStr - 1;

    while(i < sizeStr / 2)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    return(str);
}

int main(void)
{
    char    str[] = "abcde";
    printf("%s", ft_strrev(str));
    return (0);
}