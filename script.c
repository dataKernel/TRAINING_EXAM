#include <stdio.h>


void 	ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 1;
	//on passe le string en full min
	ft_strlowcase(str);
	if(str[0] >= 'a' || str[0] <= 'z')
		str[0] -= 32;
		
	while(str[i] && ft_strlen(str) > 1)
	{
		if((str[i] >= 'a' && str[i] <= 'z'))
		{
			if(str[i - 1] < '0' || (str[i - 1] > '9' 
			&& str[i - 1] < 'A') || (str[i - 1] > 'Z' 
			&& str[i] < 'a'))
				str[i] -= 32;
		}
		i++;
	}
	return(str);
}

int		main(void)
{
	char	test[] = "test, du truc? 42ok ca-pUUt?";

	ft_strcapitalize(test);
	printf("%s", test);
	return(0);
}