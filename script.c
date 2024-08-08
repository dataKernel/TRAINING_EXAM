#include <stdio.h>

//protos
int		ft_sqrt(int);
int		ft_is_prime(int);
int		ft_find_next_prime(int);

int		ft_sqrt(int nb)
{
	int		i = 1;

	while(i * i < nb)
	{
		i++;
		if(i * i == nb)
			return(i);
	}
	//in case we got a non integer number
	return(i - 1);
}

int		ft_find_next_prime(int nb)
{
	int		i = 2;
	if(ft_is_prime(nb))
		return(nb);
	else
	{
		while(!ft_is_prime(nb))
		{
			nb++;
		}
	}
	return(nb);
}

int		ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < ft_sqrt(nb))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("prime: %i", ft_is_prime(11));
	printf("prime next: %i", ft_find_next_prime(12));
	return (0);
}