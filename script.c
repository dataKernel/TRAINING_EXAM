#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i = 0;

	while(str[i])
		i++;
	return(i);		
}

char	*ft_strdup(char *str)
{
	int		i = 0;

	while(str[i])
	{
		str[i] = 'a';
		i++;
	}
	return(str);
}

int		main(void)
{
	char	str[] = "000000000";
	char	*strcp;
	strcp = ft_strdup(str);

	printf("%s", strcp);
	return(0);
}
