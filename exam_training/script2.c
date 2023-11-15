#include <stdio.h>
#include <unistd.h>
#define TAILLE_TAB 5

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int		tab[TAILLE_TAB] = {-2, 3, 4, 0, 1001};
	int		temp;
	int		i;
	int		j;

	i = 0;
	while(i < TAILLE_TAB)
	{
		j = i + 1;
		while(j < TAILLE_TAB)
		{
			if(tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
		
	//verifier le contenu
	for(int i = 0; i < 5; i++)
		printf("tab[%i]-> %i  ", i, tab[i]);
	return(0);
}