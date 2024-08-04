#include <stdbool.h>
#include <stdio.h>

//--------- MACROS ---------
#define PRENOM "Ambre"
//--------------------------
bool	compare_strings(char *s1, char *s2)
{
	bool	check;
	int		i;

	check = true;
	i = 0;
	while (check && (s1[i] && s2[i]))
	{
		if (s1[i] != s2[i])
			check = false;
		i++;
	}
	return (check);
}

int	return_iterations_firstname(char *str)
{
	

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (0);
}

int	main(void)
{
	printf(compare_strings("lancelot", "lancelot") ? "true" : "false");
	return (0);
}

// #include <stdio.h>

// //ex:result -> 0, 1, 1, 2, 3, 5, 8, 13...

// int		ft_fibonacci(int index)
// {
// 	if(index < 0)
// 		return(-1);
// 	if(index == 0)
// 		return(0);
// 	if(index == 1)
// 		return(1);

// 	//...
// }

// int		main(void)
// {
// 	return(0);
// }