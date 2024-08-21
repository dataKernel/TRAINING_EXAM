#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int		i;

	if(str == NULL)
		return(1);
	i = 0;
	while(str[i])
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] >= 'Z'))
			i++;
		else
			return(0);
	}
	return(1);
}

int		ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return(0);
		i++;
	}
	return(1);
}

int		main(void)
{
	printf("%i",ft_str_is_numeric("747847d3"));
	return(0);
}