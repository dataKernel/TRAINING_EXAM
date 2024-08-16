#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_point
{
    int     x;
    int     y;
}t_point;

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
char    **make_area(char **zone, t_point size)
{
    char **new;

    new = malloc(sizeof(char *) * size.y);
    for (int i = 0; i < size.y; i++)
    {
        new[i] = malloc(size.x + 1);
        for (int j = 0; j < size.x; j++)
            new[i][j] = zone[i][j];
        new[i][size.x] = '\0';
    }

    return new;
}

void    flood_fill(char **tab, t_point size, t_point begin)
{
    //...
}

int     main(void)
{
    t_point     size = {8, 5};
    t_point     begin = {0, 0};
    char        **area;
    char        *zone[]= 
    {
        "11111111",
        "10001001",
        "10010001",
        "10110001",
        "11100001",
    };
    area = make_area(zone, size);
    for(int i = 0; i <size.y; i++)
        printf("%s\n", area[i]);
    printf("\n");
    return(0);
}