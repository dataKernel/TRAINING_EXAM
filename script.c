#include <stdio.h>
#include <stdlib.h>

#define	MIN		1
#define MAX		5

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

int		*ft_range(int min, int max)
{
	int		*ptr;
	int		sizeArray;
	int		i;

	if(min >= max)
		return(NULL);
	ptr = malloc(sizeof(int) * (max - min));
	if(ptr == NULL)
		return(NULL);
	sizeArray = max - min;
	i = 0;
	while(i < sizeArray)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return(ptr);
}

int		main(void)
{
	int		*ptrlocal;

	ptrlocal = ft_range(MIN, MAX);
	if(!ptrlocal)
	{
		printf("ptr local was NULL");
		return(-1);
	}
	for(int i = 0; i < MAX - MIN; i++)
	{
		printf("ptrlocal[%i]:%i\n", i, ptrlocal[i]);
	}
	free(ptrlocal);
	return(0);
}