#include <stdio.h>

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
	printf("prime: %i", ft_is_prime(23484984));
	return (0);
}