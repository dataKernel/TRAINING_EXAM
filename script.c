#include <stdio.h>
#include <unistd.h>

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

	indexArgsCount = 0;

	while(indexArgsCount < ac)
	{
		ft_putstr(av[indexArgsCount]);
		ft_putchar('\n');
		indexArgsCount++;
	}
	return(0);
}