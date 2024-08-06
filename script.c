#include <stdio.h>

int		ft_fibonacci_iterative(int index)
{
	int		i = 0;
	int		res = 0;
	int		index0 = 0;
	int		index1 = 1;

	if(index == 0 || index == -1)
		return(0);
	if(index == 1)
		return(1);
	//we know for sure know our calcul will start on index 2 as the min value
	while(i <  index)
	{
		res = index0 + index1;
		index0 = index1;
		index1 = res;
		i++;
	}
	return(res);
}

int		main(void)
{
	printf("%i ", ft_fibonacci_iterative(-1));
	printf("%i ", ft_fibonacci_iterative(0));
	printf("%i ", ft_fibonacci_iterative(1));
	printf("%i ", ft_fibonacci_iterative(5));
	return(0);
}