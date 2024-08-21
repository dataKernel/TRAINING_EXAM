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

int		main(void)
{
	printf("%i", ft_str_is_alpha("sqmdlkfjqs>dmlkfj"));
	return(0);
}