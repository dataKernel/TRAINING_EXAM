#include <stdio.h>
#include <stdlib.h>

//1, 2, 3, 4
int		*ft_range(int min, int max)
{
	int		tabMalloc;
	int		i = 0;

	tabMalloc = malloc(sizeof(int) * (max - min));
	if(!tabMalloc)
		return(NULL);
	while(i < max - 1)
	{
		tabMalloc[i] = min;
		min++;
		i++;
	}
	return(tabMalloc);
}

int		main(void)
{
	int		*tab = ft_range(1, 4);

	if(!tab)
	{
		printf("fail allocation");
		return(-1);
	}
	for(int i = 0; i < 3; i++)
		printf("val[%i]:%i", i, tab[i]);
	return(0);
}
