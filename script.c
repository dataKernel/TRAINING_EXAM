#include <stdio.h>
#include <string.h>

#define SIZE_ARRRAY_STD 	10
#define SIZE_ARRAY_SHORT 	3

int		ft_strlen(char *str)
{
	int		i = 0;

	while(str[i])
		i++;
	return(i);
}

char 	*ft_strcpy(char *dst, char *src)
{
	int		sizeSrc = ft_strlen(src);
	int		i = 0;

	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = src[i];
	return(dst);
}

int		main(void)
{
	char	tabStd[SIZE_ARRRAY_STD];
	char	tabShort[SIZE_ARRAY_SHORT];

	ft_strcpy(tabStd, "abcdef");
	printf("tab:%s\n", tabStd);
	ft_strcpy(tabShort, "abc");
	printf("tab:%s", tabShort);
	return(0);
}