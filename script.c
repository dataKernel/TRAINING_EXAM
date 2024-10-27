#include <stdio.h>
#include <stdlib.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

void    ft_copy_str(char *src, char *dst)
{
    int     i;

    i = 0;
    while(src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\n'; // on ajoute un retour chariot en fin de copie pr directement l'avoir pr malloc
}

char    *ft_concat_params(int argc, char **argv)
{
    char    *tabMalloc;
    int     sizeTab;
    int     indexArgc;
    int     indexArgv;

    tabMalloc = NULL;
    sizeTab = 0;   
    indexArgc = 1;
    indexArgv = 0;
    while(indexArgc < argc)
    {
        sizeTab += ft_strlen(argv[indexArgc]);
        indexArgc++;
    }
    printf("checking de la size: %i", sizeTab + argc-1);
    tabMalloc = malloc(sizeof(char) * (sizeTab + argc - 1));
    indexArgc = 1;
    indexArgv = 0;
    while(indexArgc < argc)
    {
        ft_copy_str(argv[indexArgc], tabMalloc + indexArgv);
        indexArgv += ft_strlen(argv[indexArgc]) + 1;
        indexArgc++;
    }
    tabMalloc[indexArgv] = '\0';
    return(tabMalloc);
}

int     main(int argc, char **argv)
{
    char    *tab = ft_concat_params(argc, argv);


    printf("malloc assignation: %s", tab);
    free(tab);
    return(0);
}