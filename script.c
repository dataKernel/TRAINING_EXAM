#include <stdio.h>
#include <string.h>


int		ft_strlen(char *);
char	*ft_strncpy(char *, char *, unsigned int);


int		ft_strlen(char *str)
{
	int		i = 0;

	while(str[i])
		i++;
	return(i);
}

char 	*ft_strncpy(char *dst, char *src, unsigned int n)
{
	int		sizeSrc = ft_strlen(src);
	int		i = 0;

	while(i < n)
	{
		if(i >= sizeSrc)
			dst[i] = '\0';
		else
			dst[i] = src[i];
		i++;
	}
	return(dst);
}

int		main(void)
{
	char	tabStd[] = "Hello, World!";
	char	tabShort[3];

	ft_strncpy(tabStd + 7, tabStd, 5);
	printf("tabStd: %s", tabStd);
	return(0);
}