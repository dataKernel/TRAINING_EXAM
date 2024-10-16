#include <stdio.h>
#include <stdlib.h> //malloc library


int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_concat(int argc, char **argv)
{
	char	*str;
	int		countArgs;
	int		countCharArgv;

	countCharArgv = 0;
	countArgs = 0;
	while(countArgs < argc)
	{
		countCharArgv += ft_strlen(argv[countArgs]);
		countArgs++;
	}
	//checking size full str
	printf("sizeStr: %i\n", countCharArgv);
	return(str);
}

int		main(int argc, char **argv)
{
	char	*str;

	str = ft_concat(argc, argv);
	return(0);
}