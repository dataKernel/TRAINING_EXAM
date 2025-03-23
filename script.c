#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//--------------------------------------------------------------
//  STRUCT DEF
//--------------------------------------------------------------
struct      s_stock_params
{
    int     _tailleParam;
    char    *_str;
    char    *_cpyStr;
    char    **_tab;
};
//--------------------------------------------------------------
//  DEF PROTOS
//--------------------------------------------------------------
struct  s_stock_params      *ft_param_vers_tab(int, char*[]);

void    ft_strcpy(char*, char*);
int     ft_strlen(char*);    
//--------------------------------------------------------------
//  DEF FUNCS
//--------------------------------------------------------------
int     ft_strlen(char *str)
{
    int     i;

    if(!str)
        return(0);
    i = 0;
    while(str[i])
        i++;
    return(i);
}

void    ft_strcpy(char *src, char *dst)
{
    
    int     i;

    if(!src || !dst)
        return;
    i = 0;
    while(src[i])
    {

        i++;       
    }

}

struct s_stock_params       *ft_param_vers_tab(int ac, char *av[])
{
    struct s_stock_params       *tab;

    tab = malloc(sizeof(struct s_stock_params) * (ac + 1));
    for(int i = 0; i < ac + 1; i++)
    {
        tab[i]._tailleParam = ft_strlen(av[i]);
        tab[i]._str = av[i];
    }
    return(tab);
}

int     main(int ac, char *av[])
{
    char    *str = "";

    printf("size:%i", ft_strlen(NULL));

    return(0);
}