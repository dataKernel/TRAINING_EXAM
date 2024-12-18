#include <stdio.h>
#include <stdlib.h>

//<>

#define STR_TEST    "xx0 yyy1 zzzz2"

//on check la size de la string jusqu'au ws character
int        ft_strlen(char *str)
{
    int        i = 0;

    while (str[i])
        i++;
    return(i);
}

int     ft_strlen_by_ws(char *str)
{
    int     i = 0;

    while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
        i++;
    return(i);
}

int     count_words(char *str)
{
    int     countWords = 0;
    int        i = 0;

    if(!str || ft_strlen(str) == 0)
        return(0);

    while (str[i])
    {
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
             countWords++;
        i++;
    }
    return(countWords + 1);
}

char    **ft_split(char *str)
{
    char    **mallocTabStr;
    int     i = 0; //index du parcours de la chaine str (param)
    int     indexMallocTabStr = 0;
    int     indexMallocStr;
    int     indexSizeStr = 0;

    //si il n'y a pas de mots
    if(count_words(str) == 0)
        return(NULL);
    mallocTabStr = malloc(sizeof(char*) * (count_words(str) + 1));
    if(!mallocTabStr)
        return(NULL);
    while (indexMallocTabStr < count_words(str))
    {
        indexMallocStr = 0;
        mallocTabStr[indexMallocTabStr] = malloc(sizeof(char) * (ft_strlen_by_ws(str + i) + 1));
        while (indexMallocStr < ft_strlen_by_ws(str + indexSizeStr))
        {
            mallocTabStr[indexMallocTabStr][indexMallocStr] = str[i];
            indexMallocStr++;
            i++;
        }
        indexSizeStr += indexMallocStr + 1;
        mallocTabStr[indexMallocTabStr][indexMallocStr] = '\0';
        i++;
        indexMallocTabStr++;
    }
    //dernier element du tabStr
    mallocTabStr[i] = NULL;
    return(mallocTabStr);
}
//////////////////////////////////////
int     main(void)
{
    char    **tabStr = ft_split(STR_TEST);
    int     wordsCount = count_words(STR_TEST);
    
    
    if(!tabStr)
    {
        printf("fail alloc...");
        return(-1);
    }
    for(int i = 0; i < wordsCount; i++)
        printf("[%i]->%s\n", i, tabStr[i]);
    for(int i = 0; i < wordsCount; i++)
    {
        if(i || i == 0)
            printf("check");
        free(tabStr[i]);
    }
    free(tabStr);
    return(0);
}
