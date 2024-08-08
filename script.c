#include <stdio.h>

int 	ft_sqrt(int nb)
{
	int		i = 1;

	while(i * i < nb)
	{
		i++;
		if(i * i == nb)
			return(i);
	}
	return(0);
}

int		main(void)
{
	printf("%i", ft_sqrt(25));
	return(0);
}