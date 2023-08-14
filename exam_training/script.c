#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

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
	int		i;
	
	i = 0;
	while(str[i])
	{
		if(str[index] == str[i])
			return(str[index]);
		i++;
	}
	return(0);
}


int		main(int argc, char **argv)
{
	char	doublonTab[50];
	int		sizeDoublonContent;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if(argc != 2)
	{
		printf("wrong args nbr\n");
		return(0);
	}
	while(argv[i])
	{
		if(check_doublons(argv[i], i))
		{
			doublonTab[j] = argv[i];
			j++;
		}
		i++;
	}
	doublonTab[j] = '\0';
	return(0);
}

//azertzt rtzz