#include <stdio.h>

int		ft_recursive(int nb, int power)
{
	if(power < 0)
		return(0);
	if(power == 0)
		return(1);
	return(nb * ft_recursive(nb, power - 1));
}

int		main(void)
{
	printf("val: %i", ft_recursive(4, -10));
	return(0);
}