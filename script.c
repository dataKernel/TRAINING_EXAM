#include <stdio.h>
#include <stdlib.h> //malloc library

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		calc_full_strSize_from_argv(int argc, char **argv)
{
	int	countArgs;
	int	countCharArgv;

	countArgs = 0;
	countCharArgv = 0;
	while (countArgs < argc)
	{
		countCharArgv += ft_strlen(argv[countArgs]);
		countArgs++;
	}
	return (countCharArgv);
}

char	*ft_concat(int argc, char **argv)
{
	char	*strArray;
	int		countCharArgv;
	int		countArgc;
	int		countArgv;
	int		i;

	countArgc = 0;
	// calc the array size and gen malloc allocation
	countCharArgv = calc_full_strSize_from_argv(argc, argv);
	strArray = malloc(sizeof(char) * (countCharArgv + argc + 1));
	// filling the array
	i = 0;
	while (countArgc < argc)
	{
		countArgv = 0;
		while (argv[countArgc][countArgv])
		{
			strArray[i] = argv[countArgc][countArgv];
			i++;
			countArgv++;
		}
		if (countArgc < argc - 1)
		{
			strArray[i] = '\n';
			i++;
		}
		countArgc++;
	}
	strArray[i] = '\0';
	return (strArray);
}

int		main(int argc, char **argv)
{
	char *str;

	str = ft_concat(argc, argv);
	printf("res: %s", str);
	return (0);
}