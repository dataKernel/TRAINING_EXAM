#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
void	ft_copy_str(char *src, char *dst)
{
	int	i;

	i = 0;
	if(!src || !dst)
		return;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*tabMalloc;
	int		sizeTab;
	int		indexArgc;
	int		indexArgv;

	tabMalloc = NULL;
	sizeTab = 0;
	indexArgc = 1;
	indexArgv = 0;
	// calcul du tab malloc
	while (indexArgc < argc)
	{
		sizeTab += ft_strlen(argv[indexArgc]);
		indexArgc++;
	}
	tabMalloc = malloc(sizeof(char) * (sizeTab + argc - 1));
	if (!tabMalloc) // protect malloc
		return (NULL);
	indexArgc = 1;
	indexArgv = 0;
	while (indexArgc < argc)
	{
		ft_copy_str(argv[indexArgc], tabMalloc + indexArgv);
		indexArgv += ft_strlen(argv[indexArgc]);
		if (indexArgc < argc - 1)
		{
			tabMalloc[indexArgv] = '\n';
			indexArgv++;
		}
		indexArgc++;
	}
	tabMalloc[indexArgv] = '\0';
	return (tabMalloc);
}

int	main(int argc, char **argv)
{
	char *tab = ft_concat_params(argc, argv);

	if (!tab)
		return (-1); // erreur d'allocation
	//checking output
	printf("malloc assignation: \n%s", tab);
	free(tab);
	return (0);
}