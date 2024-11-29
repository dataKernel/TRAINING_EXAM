#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int		ft_strlen(char *str)
{
	int		i = 0;

	while(str[i])
		i++;
	
	return(i);
}

int		ft_strcpy(char *src, char dst[], bool check)
{
	int		i = 0;

	if(!src || !dst)
		return(-1);
	for(; src[i]; i++)
	{
		dst[i] = src[i];
	}
	if(check)
		dst[i] = '\0';
	return(i);
}

int		checking_size_str_argv(int argsCount, char *argvTab[])
{
	int		i = 1;//index argc
	int		res = 0;
	
	while(i < argsCount)
	{
		res += ft_strlen(argvTab[i]);
		i++;
	}
	//ajout des espaces et du NUL terminator
	res += (argsCount - 2) + 1;	
	return(res);
}

char	*ft_concat_params(int argc, char *argv[])
{
	char	*mallocStr = NULL;
	int		sizeMalloc = checking_size_str_argv(argc, argv);
	int		i = 1; //index de l'argv sur le 1er argument (on skip le nom du prog)
	int		indexMallocStr = 0;
	int		sizeCpy = 0;

	mallocStr = malloc(sizeof(char) * sizeMalloc);
	//on check la gen dynamique de malloc
	if(!mallocStr)
		return(NULL);
	while(i < argc)
	{
		//on copie et on ajouter la taille de la chaîne parcourue a l'index du malloc
		sizeCpy = ft_strcpy(argv[i], mallocStr + indexMallocStr, false); // boolean pr décider si on veut NUL terminator
		if(sizeCpy < 0)
		{
			free(mallocStr);
			return(NULL);
		}
		indexMallocStr += sizeCpy;
		if(i < argc - 1)
		{
			mallocStr[indexMallocStr] = '\n';
			indexMallocStr++;
		}
		i++;
	}
	mallocStr[indexMallocStr] = '\0';
	return(mallocStr);
}

int		main(int argc, char *argv[])
{
	char	*tst = NULL;
	
	tst = ft_concat_params(argc, argv);
	if(!tst)
		printf("issue allocation");
	printf("%s", tst);

	return(0);
}
