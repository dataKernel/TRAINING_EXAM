#include <stdio.h>
#include <stdlib.h>

#define STR_TEST    "truc bidule machin "

//on check la size de la string jusqu'au ws character
int     ft_strlen_by_ws(char *str)
{
    int     i = 0;
    
    while(str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		i++;
    return(i);
}

int     count_words(char *str)
{
    int     countWords = 0;
    int		i = 0;
   	
	if(!str)
		return(0);

	while(str[i])
	{
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
             countWords++;
		i++;
    }
	if(i > 0)
		return(countWords + 1);
    return(0);
}

char    **ft_split(char *str)
{
    char    **mallocTabStr;
    char	*mallocStr;
	int     i = 0; //index de tab de str
	int		j; //index de str
    
	//si il n'y a pas de mots
	if(count_words(str) == 0)
		return(NULL);
	mallocTabStr = malloc(sizeof(char *) * (count_words(str) + 1));
    if(!mallocTabStr)
        return(NULL);
	while(i < count_words(str))
	{
		//... algo debut
		i++;
	}
	//dernier element du tabStr
	mallocTabStr[i] = NULL;
    return(mallocTabStr);
}

int     main(void)
{
    char    **tabStr = NULL;
   	

	printf("value:%i", count_words(STR_TEST));
    return(0);
}
