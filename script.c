#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i = 0;

	while(str[i])
		i++;

	return(i);
}

void	ft_strcpy(char *src, char *dst)
{
	if(src == NULL)
	{
		printf("fail copy... exit");
		return ;
	}
	for(int i = 0; src[i]; i++)
	{
		dst[i] = src[i];
	}
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

	mallocStr = malloc(sizeof(char) * sizeMalloc);
	//on check la gen dynamique de malloc
	if(!mallocStr)
		return(NULL);
	while(i < argc)
	{
		ft_strcpy(argv[i], mallocStr + indexMallocStr);
		indexMallocStr += ft_strlen(argv[i]);
		if(i < argc - 1)
			mallocStr[indexMallocStr] = '\n';
		i++;
	}
	return(mallocStr);
}

int		main(int argc, char *argv[])
{
	char	*tst;
	tst = ft_concat_params(argc, argv);
	
	printf("%s", tst);
	return(0);
}
