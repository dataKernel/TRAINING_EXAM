/*
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
*/

#include <stdio.h>
#include <unistd.h>

#define DIST    13

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int argc, char *argv[])
{
    char    *str = argv[1];
    char    letter;

    if(argc != 2)
    {
        printf("\n");
        return(0);
    }

    for(int i = 0; str[i]; i++)
    {
        letter = str[i];
        for(int counter = 0; counter < DIST; counter++)
        {
            if(letter == 'z' || letter == 'Z')
                letter = 'a';
            else if(letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z')
                letter++;
        }
        ft_putchar(letter);
    }
    return(0);
}