#include <stdio.h>

int		ft_fibonacci(int index)
{
	if(index == 0)
		return(0);
	if(index == 1)
		return(1);
	return(123);
}

int		main(void)
{
	printf("%i", ft_fibonacci(12));
	return(0);
}