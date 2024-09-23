#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab; 

	tab = malloc(sizeof(int) * (max - min));
	//malloc protec
	if(tab == NULL)
		return(NULL);
	while(min < max) 
	{
		tab[min] = min;
		min++;
	}
	return(tab);
}

int		main(void)
{
	int		*tab;

	tab = ft_range(7, 10);

	for(int i = 0; i < 10; i++)
	{
		printf("[%i]:%i  \n", i, tab[i]);
	}
	return(0);
}