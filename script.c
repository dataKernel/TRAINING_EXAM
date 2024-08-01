#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int		i = 0;
	int		res = 1;

	if(power < 0)
		return(0);
	if(power == 0)
		return(1);
	while(i < power)
	{
		res *= nb;
		i++;
	}
	return(res);
}

int		main(void)
{
	int		res = ft_iterative_power(-4, 2);

	printf("res: %i", res);
	return(0);
}