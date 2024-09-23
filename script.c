// #include <stdio.h>
// #include <stdlib.h>

// int		ft_ultimate_range(int *tab, int min, int max)
// {
// 	int		*ptr;
// 	int		i;

// 	ptr = malloc(sizeof(int) * (max - min));
// 	if(ptr == NULL)
// 		return(0);
// 	i = 0;
// 	while(i < max - 1)
// 	{
// 		ptr[i] = min;
// 		i++;
// 		min++;
// 	}
// 	for(int i = 0; i < max - 1; i++)
// 		printf("[%i]:%i ", i, ptr[i]);
// 	return(0);
// }

// int		main(void)
// {
// 	int		tab[5];

// 	ft_ultimate_range(tab, 1, 5);

// 	// for(int i = 0; i < 5; i++)
// 	// 	printf("[%i]:%i ", i, tab[i]);
// 	return(0);
// }

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i; 

	tab = malloc(sizeof(int) * (max - min));
	//malloc protec
	if(tab == NULL)
		return(NULL);
	i = 0;
	while(i < max) 
	{
		tab[i] = min;
		min++;
		i++;
	}
	return(tab);
}

int		main(void)
{
	int		*tab;

	tab = ft_range(7, 10);

	for(int i = 0; i < 3; i++)
	{
		printf("[%i]:%i  \n", i, tab[i]);
	}
	return(0);
}