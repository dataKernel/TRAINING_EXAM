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

	//test size
	printf("size: %i", sizeSrc);
	while(src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return(dst);
}

int		main(void)
{
	char	tabStd[SIZE_ARRRAY_STD];
	char	tabShort[SIZE_ARRAY_SHORT];

	//ft_strcpy(tabStd, "abcd");
	strcpy(tabShort, "abcd");
	printf("tab:%s", tabStd);
	return(0);
}