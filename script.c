#include <stdio.h>

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
	int		indexSrc;
	int		indexDst;

	indexSrc = 0;
	indexDst = ft_strlen(dst);
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
	char	tab[10] = "abc";

	ft_strcat(tab, "de");
	printf("post_tab: %s", tab);
	return(0);
}