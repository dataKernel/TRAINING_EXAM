#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char);
bool	ft_str_is_equal(const char*, const char*);
char	*ft_strstr(char *, char *);

bool	ft_str_is_equal(const char *s1, const char *s2)
{
	bool	check = true;
	int		i = 0;

	//DEBUG check infos
	//printf("s1:%s  s2:%s\n", s1, s2);
	while(s2[i])
	{
		if(s1[i] != s2[i])
			return(false);
		i++;
	}
	return(check);
}

char	*ft_strstr(char *str, char *toFind)
{
	int		i = 0;

	while(str[i])
	{
		if(ft_str_is_equal(str + i, toFind))
		{
			return(str + i);
		}
		i++;
	}
	return(NULL);
}

int		main(void)
{
	printf("%s", ft_strstr("lancelot code dur..", "code"));
	return(0);
}