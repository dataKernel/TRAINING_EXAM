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

int     main(int argc, char **argv)
{
    char    temp;
    int     sizeStr;
    int     i;

    sizeStr = ft_strlen(argv[1]);
    printf("size:%i\n", sizeStr);
    i = 0;
    if(argc != 2)
    {
        ft_putchar('\n');
        return(0);
    }
    while(argv[1][i])
    {
        temp = argv[1][i];
        argv[1][i] = argv[1][sizeStr];
        argv[1][sizeStr] = temp;
        i++;
        sizeStr--;
        printf("char:%c\n", argv[1][i]);
    }
    return(0);
}