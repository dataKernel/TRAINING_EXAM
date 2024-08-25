#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strncat(char *dst, char *src, int nb)
{
	int		indexSrc;
	int		indexDst;

	indexSrc = 0;
	indexDst = ft_strlen(dst);
	while(indexSrc < nb)
	{
		dst[indexDst] = src[indexSrc];
		indexDst++;
		indexSrc++;
	}
	dst[indexDst] = '\0';

	return(dst);
}

int		main(void)
{
	char	s1[5] = "abcd";
	char	*s2 = "zeqsdmlkfjsdflmj";

	ft_strncat(s1, s2, 2);
	printf("%s", s1);
	printf("%s", s1);
	return(0);
}