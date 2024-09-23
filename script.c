#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		sizeArray;
	int		*ptr;
	int		i;

	sizeArray = max - min;
	ptr = malloc(sizeof(int) * sizeArray);
	if(ptr == NULL)
		return(0);
	else if(min >= max)
	{
		range = NULL;
		return(0);
	}
	i = 0;
	while(i < sizeArray)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	*range = ptr;
	return(sizeArray);
}

int		main(void)
{
	int		*tab;

	ft_ultimate_range(&tab, 1, 5);

	for(int i = 0; i < 4; i++)
		printf("[%i]:%i____", i, tab[i]);
	return(0);
}