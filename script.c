#include <stdio.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	return(dest);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strcat(char *dst, char *src)
{
	int		indexDst;
	int		indexSrc;

	indexDst = ft_strlen(dst);
	printf("truc: %i", indexDst);
	indexSrc = 0;
	while(src[indexSrc])
	{
		dst[indexDst] = src[indexSrc];
		indexDst++;
		indexSrc++;
	}
	return(dst);
}

int		main(void)
{

	//reprod test case de 1
	char	tab[] = "abcd";

	int		size = ft_strlen(tab);
	printf("size: %i", size);
	ft_strcat(tab, "ef");
	size = ft_strlen(tab);
	printf("size: %i", size);
	printf("res: %s", tab);
	return(0);
}