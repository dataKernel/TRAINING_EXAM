#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

size_t		ft_strlen(char *str)
{
	size_t	i;
	
	i = 0;
	while(str[i])
		i++;
	return(i);
}

size_t		get_index_space(char *str)
{
	size_t		indexSpace;
	size_t		i;

	indexSpace = 0;
	i = 0;
	while(str[i])
	{
		if(str[i] == ' ')
		{
			indexSpace = i;
		}
		i++;
	}
	if(str[i - 1] == ' ')
		indexSpace = 0;
	return(indexSpace);
}

int		main(int argc, char **argv)
{
	char		word[100];
	size_t		spaceIndex;
	size_t		i;

	spaceIndex = get_index_space(argv[1]) + 1;
	i = 0;
	if(argc != 2 || !argv[i][0])
	{
		ft_putchar('\n');
		return(0);
	}
	while(argv[1][spaceIndex])
	{
		word[i] = argv[1][spaceIndex];
		i++;
		spaceIndex++;
	}
	printf("last: %s", word);
	return(0);
}
