#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		sizeStr;
	int		i;

	sizeStr = ft_strlen(src);
	i = 0;
	//dyna alloc
	str = (char *) malloc((sizeof(char) + 1) * sizeStr);
	//protec
	if(str == NULL)
		return(NULL);
	//filling
	while(src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return(str);
}

int		main(void)
{
	char	*src = "lancelot";
	char	*str = NULL;

	printf("size char: %lu\n", sizeof(char));
	printf("size int: %lu\n", sizeof(int));
	printf("size float: %lu\n", sizeof(float));
	printf("size long %lu\n", sizeof(long));
	printf("size double %lu\n", sizeof(double));


	str = ft_strdup(src);
	printf("str: %s", str);
	//free memory safe usage
	free(str);
	return(0);
}