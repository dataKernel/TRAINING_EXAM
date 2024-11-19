#include <stdio.h>
#include <stdlib.h>
//--------------protos---------------
char	*ft_concat(int, char *[]);
//-----------------------------------
int		ft_strlen(char *str)
{
	int		i = 0;

	while(str[i])
		i++;
	return(i);
}

char	*ft_concat(int ac, char *av[])
{
	char	*mallocStr = NULL;
	int		sizeStr = 0;
	int		indexMallocStr = 0;
	int		i = 1;//index ac, skipping the first one
	//(executable program)
	int		j;//index av
	
	//calc full size str
	while(i < ac)
	{
		sizeStr += ft_strlen(av[i]);
		i++;
	}
	//we add the \n and NUL terminator
	sizeStr += ac - 2 + 1; //could resume with ac - 1
	mallocStr = malloc(sizeof(char) * sizeStr);
	if(!mallocStr)
	{
		printf("fail allocation");
		return(NULL);
	}
	//filling the dynamical alloc
	i = 1;
	while(i < ac)
	{
		j = 0;
		while(av[i][j])
		{
			mallocStr[indexMallocStr] = av[i][j];
			indexMallocStr++;
			j++;
		}
		if(i != ac - 1)
			mallocStr[indexMallocStr++] = '\n';
		i++;
	}
	mallocStr[indexMallocStr++] = '\0'; 
	return(mallocStr);
}

int		main(int argc, char *argv[])
{
	char	*str = ft_concat(argc, argv);

	printf("%s", str);
	return(0);
}

