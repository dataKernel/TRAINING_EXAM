#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

int		main(int argc, char **argv)
{
	return(0);
}