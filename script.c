#include <stdio.h>
#include <unistd.h>
//just in case
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		str_cmp_by_ascii(char *str1, char *str2)
{
	int		i;

	i = 0;
	while((str1[i] || str2[i]) && str1[i] == str2[i])
		i++;
	return(str1[i] - str2[i]);
}


int		main(int ac, char *av[])
{
	char	*temp;
	int		i;
	int		j;

	temp = NULL;
	i = 1;
	while(i < ac)
	{
		j = i + 1;
		while(j < ac)
		{
			if(str_cmp_by_ascii(av[i], av[j]) > 0)
			{
				temp = av[i];
				av[i] = av[j];
				av[j] = temp; 
			}
			j++;
		}
		i++;
	}

	for(int i = 0; i < ac; i++)
	{
		printf("args[%i]:%s\n", i, av[i]);
	}
	return(0);
}