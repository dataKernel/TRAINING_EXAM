#include <stdio.h>

int	ft_iterative_pow(int nb, int pow)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (i < pow)
	{
		res_state printf("res_state:%i\n", res);
		res *= nb;
		i++;
	}
	return (res);
}

int	main(void)
{
	int check = ft_iterative_pow(3, 3);
	printf("%i", check);
	return (0);
}