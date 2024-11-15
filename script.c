#include <stdio.h>
#include <stdlib.h>

#define MIN				3
#define MAX				4
#define SIZE_ARRAY		MAX-MIN
//1 a 3 (4 exclus)

int		ft_u_range (int **range, int min, int max)
{
	int		i = 0;
	
	if(min >= max)
		return(-1);
	range[0] = malloc(sizeof(int) * (SIZE_ARRAY));
	if(!*range)
		return(-1);
	while(i < SIZE_ARRAY)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return(SIZE_ARRAY);
}

int		main(void)
{
	int		*tab;
	int		sizeArray;

	sizeArray = ft_u_range(&tab, MIN, MAX);
	if(sizeArray == -1)
	{
		printf("fail in allocation or size MIN/MAX");
		return(0);
	}
	//checking post
	for(int i = 0; i < sizeArray; i++)
		printf("(post):tab[%i]:%i\n", i, tab[i]);
	return(0);
}
