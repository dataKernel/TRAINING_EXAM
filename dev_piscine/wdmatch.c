#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
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

int		get_occurence_in_str(char *str, char c)
{
	int		res;
	int		i;

	res = 0;
	i = 0;
	while(str[i])
	{
		if(str[i] == c)
			res++;
		i++;
	}
	return(res);
}

bool	check_occurence_before_posi(char *str, int posi, char c)
{
	int		i;

	i = 0;
	while(i < posi)
	{
		if(str[i] == c)
			return(true);
		i++;
	}
	return(false);
}

void	print_string_from_another(char *str1, char *str2)
{
	bool	check;
	int		i;
	int		j;
	int		occ1;
	int		occ2;
	
	check = true;
	i = 0;
	while(str1[i] && check)
	{
		check = false;
		occ1 = get_occurence_in_str(str1, str1[i]);
		occ2 = get_occurence_in_str(str2, str1[i]);
		if(occ1 <= occ2)
			check = true;
		i++;
	}
	if(ft_strlen(str1) == i)
		ft_putstr(str1);
}

int		main(int argc, char **argv)
{
	char	*str;

	str = "loll";
	if(argc != 1)
	{
		ft_putchar('\n');
		return(0);
	}
	print_string_from_another("zloll", "ablcolal");
	return(0);
}
