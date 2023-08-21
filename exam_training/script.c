#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int		check_size_nbr(int nbr)
{
	int		res;

	res = 0;
	while(nbr > 0 || nbr < 0)
	{
		nbr /= 10;
		res++;
	}
	return(res);
}

char	*ft_itoa(int nbr)
{
	int		i;
	int		sizeNbr;
	char	*string;

	string = NULL;
	sizeNbr = check_size_nbr(nbr);
	i = sizeNbr - 1;
	string = (char *)malloc(sizeof(char) * sizeNbr + 1);
	while(nbr > 0)
	{
		string[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	string[i] = '\0';
	return(string);
}

int		main(void)
{
	char	*test;

	test = ft_itoa(879898);
	printf("value --> %s\n", test);
	return(0);
}