#include <stdio.h>

int		ft_fibonacci_iterative(int index)
{
	int	i;
	int	res;
	int	index0;
	int	index1;

	i = 1;
	res = 0;
	index0 = 0;
	index1 = 1;
	if (index == 0 || index < 0)
		return (0);
	if (index == 1)
		return (1);
	// we know for sure know our calcul will start on index 2 as the min value
	while (i < index)
	{
		res = index0 + index1;
		index0 = index1;
		index1 = res;
		i++;
	}
	return (res);
}

int		ft_fibonacci_recursive(int index)
{
	int		res = 0;

	if(index < 0 || index == 0)
		return(0);
	if(index == 1)
		return(1);
	return(ft_fibonacci_recursive(index -2) + ft_fibonacci_recursive(index - 1));
}


int	main(void)
{
	for (int i = 0; i <= 6; i++)
		printf("fib(%i):%i\n", i, ft_fibonacci_iterative(i));
	return (0);
}