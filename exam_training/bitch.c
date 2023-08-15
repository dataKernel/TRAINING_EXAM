#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	check_doublons(char *str, int index)
{
	int	i;

	i = index + 1;
	while (str[i])
	{
		if (str[index] == str[i])
			return (str[index]);
		i++;
	}
	return (0);
}

bool	check_exclusive_letter_in_tab(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (true);
		i++;
	}
	return (false);
}

int	main(int argc, char **argv)
{
	bool		check;
	char		doublonTab[50];
	int			sizeDoublonContent;
	int			i;
	int			j;
	int			k;

	check = false;
	i = 0;
	j = 0;
	k = 0; // used for checking the doubleTab
	if (argc != 3)
	{
		ft_putstr("wrong args nbr\n");
		return (0);
	}
	while (argv[1][i])
	{
		if (check_doublons(argv[1], i)
			&& !check_exclusive_letter_in_tab(doublonTab, argv[1][i]))
		{
			doublonTab[j] = argv[1][i];
			j++;
		}
		i++;
	}
	doublonTab[j] = '\0';
	// reset the indexes
	i = 0;
	while (argv[1][i])
	{
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j] && argv[1][i] == doublonTab[k])
			{
				check = true;
				printf("%c", argv[1][i]);
				k++;
			}
			else if (argv[1][i] == argv[2][j] && check == false)
				printf("%c", argv[2][j]);
			j++;
		}
		i++;
	}
	return (0);
}

// azertzt rtzz