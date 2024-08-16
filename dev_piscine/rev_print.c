#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	reverse_string(char **str)
{
    char    temp;
	int     sizeStr;
    int	    i;

	if (str == NULL)
	{
		printf("String is NULL.. function exit..\n");
		return ;
	}
	i = 0;
    sizeStr = ft_strlen(*str);
    while (i < sizeStr - 1)
	{
		temp = (*str)[i];
		(*str)[i] = (*str)[sizeStr - 1];
		(*str)[sizeStr - 1] = temp;
		i++;
		sizeStr--;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
    reverse_string(&argv[1]);
 	printf("%s", argv[1]);
	return (0);
}