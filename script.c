#include <stdio.h>
#include <stdlib.h>

#define STR_TEST    "lancelot est content"

int     ft_strlen(char *str)
{
    int     i = 0;
    
    while(str[i])
        i++;
    return(i);
}

int     count_words(char *str)
{
    int     countWords = 0;
    for(int i = 0; str[i]; i++)
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
             countWords++;
    }
    return(countWords + 1);
}

char    **ft_split(char *str)
{
    char    **tabStr;
    int     i = 0; //index de tab de str
	int		j; //index de str
    
	tabStr = malloc(sizeof(char *) * (count_words(str) + 1));
    if(!tabStr)
        return(NULL);
	while(i < count_words(str))
	{
		tabStr[i] = NULL;
		i++;
	}
	tabStr[i] = NULL;
    return(tabStr);
}

int     main(void)
{
    char    **tabStr = ft_split(STR_TEST);
    
    printf("words_count:%i\n\n----------------\n", count_words(STR_TEST));
    for(int i = 0; i < 4; i++)
        printf("[%i]:%s\n", i, tabStr[i]);
    return(0);
}
