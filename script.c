#include <unistd.h>
#include <stdio.h>

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

int		main(int ac, char *av[])
{
	int		indexArgsCount;

	indexArgsCount = 1;

	while(indexArgsCount < ac)
	{
		ft_putstr(av[ac - indexArgsCount]);
		indexArgsCount++;
	}
	return(0);
}