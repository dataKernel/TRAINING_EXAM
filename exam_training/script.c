#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

int     check_words_nbr(char *str)
{
    int     res;
    int     i;

    res = 0;
    i = 0;
    while(str[i])
    {
        if(str[i] == ' ')
            res++;
        i++;
    }
    return(res + 1);
}

char    *create_word_on_heap(char *str, int index)
{
    char    *word;
    int     sizeWord;
    int     i;
    int     j;

    sizeWord = 0;
    i = index;
    j = 0;
    printf("index: %i\n", i);
    while(str[i] != ' ' && str[i] != '\0')
    {
        i++;
        sizeWord++;
    }
    printf("sizeWord: %i\n", sizeWord);
    word = (char *)malloc(sizeof(char) * (sizeWord + 1));
    while(j < sizeWord)
    {
        word[j] = str[index];
        index++;
        j++;
    }
    word[j] = '\0';
    return(word);
}

char    **ft_split(char *str)
{
    char    **sentence;
    char    *word;
    int     i;
    int     j;

    i = 1;
    j = 0;
    sentence = (char **)malloc(sizeof(char *) * (check_words_nbr(str) + 1));
    sentence[check_words_nbr(str)] = NULL;
    sentence[0] = create_word_on_heap(str, 0);
    while(i < check_words_nbr(str))
    {
        while(str[j])
        {
            if(str[j] == ' ')
            {
                j++;
                break;
            }
            j++;
        }
        sentence[i] = create_word_on_heap(str, j);
        i++;
    }
    return(sentence);
}

int     main(int argc, char **argv)
{
    char    **split;
    if(argc != 2)
    {
        ft_putchar('\n');
        return(0);
    }
    split = ft_split(argv[1]);
    for(int i = 0; i < check_words_nbr(argv[1]); i++)
        printf("elem[%i]-->%s\n", i, split[i]);
    return(0);
}






















