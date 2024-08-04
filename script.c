#include <stdbool.h>
#include <stdio.h>

#define PRENOM "Ambre"

bool	compare_strings(char *s1, char *s2)
{
	bool	check;
	int		i;

	check = true;
	i = 0;
	while (check && (s1[i] && s2[i]))
	{
		if (s1[i] == s2[i])
			check = true;
		else
			check = false;
		i++;
	}
	return (check);
}

int	return_iterations_firstname(char *str)
{
	int	i, counter = 0;

	while (str[i])
	{
		if(str[i] == 'A')
		{
			if(compare_strings(str + i, PRENOM))
				counter++;
		}
		i++;
	}
	return (counter);
}

int	main(void)
{
	int		ite = 0;
	ite = return_iterations_firstname("un test avec Ambre et ambre et Ambre.");
	printf("ite: %i", ite);
	//printf(compare_strings("Ambre", PRENOM) ? "true" : "false");
	return (0);
}