#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*mallocStr;
	int		i;

	i = 0;
	mallocStr = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!mallocStr)
		return (NULL);
	while (str[i])
	{
		mallocStr[i] = str[i];
		i++;
	}
	mallocStr[i] = '\0';
	return (NULL);
}

int	main(void)
{
	char	*str = NULL;

	printf("pre_str: %s", str);
	str = ft_strdup("lancelot test");
	if(!str)
	{
		printf("fail allocation");
		return(-1);
	}
	printf("post str: %s", str);
	return (0);
}