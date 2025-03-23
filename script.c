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
        dst[i] = src[i];
        i++;       
    }
}

struct s_stock_params       *ft_param_vers_tab(int ac, char *av[])
{
    struct s_stock_params    *tab;
    
    char    *strCpy;

    tab = malloc(sizeof(struct s_stock_params) * (ac + 1));
    for(int i = 0; i < ac + 1; i++)
    {
        //on alloue la copie de la string
        strCpy = malloc(sizeof(char) * (ft_strlen(av[i]) + 1));
        ft_strcpy(av[i], strCpy);
        tab[i]._tailleParam = ft_strlen(av[i]);
        tab[i]._str = av[i];
        tab[i]._cpyStr = strCpy;
    }
    return(tab);
}

int     main(int ac, char *av[])
{
    struct s_stock_params    *tabStructParams;

    tabStructParams = ft_param_vers_tab(ac, av);
    //check affichage infos
    printf("av:%s ", av[0]);
    printf("av ref:%p\n", av);
    printf("-----------------\n");
    printf("tailleParam:%i\n", tabStructParams[0]._tailleParam);
    printf("-----------------\n");
    printf("str:%s", tabStructParams[0]._str);
    printf("str ref:%p\n", tabStructParams[0]._str);
    printf("-----------------\n");
    printf("cpyStr:%s ", tabStructParams[0]._cpyStr);
    printf("cpyStr ref: %p\n", tabStructParams[0]._cpyStr);
    if(av[0] == tabStructParams[0]._str)
        printf("same");
    else
        printf("not same");
    return(0);
}