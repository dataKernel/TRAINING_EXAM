#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	check_doublons(char *str, int index)
{
	int		j;
	
	while(str[index])
	{
		j = index + 1;
		while(str[j])
		{
			if(str[j] == str[index])
				return(str[index]);
			j++;
		}
		index++;
	}
	return(0);
}

int		main(int argc, char **argv)
{
	if(argc != 2)
	{
		printf("wrong args nbr\n");
		return(0);
	}
	printf("char: %c\n", check_doublons(argv[1], 1));
	printf("int: %i", check_doublons(argv[1], 1));
	return(0);
}
