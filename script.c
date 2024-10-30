#include <stdio.h>
#include <unistd.h>

#define TOP		'^'
#define BOT		'-'
#define EDGE 	'|'

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	draw_square(int height)
{
	//we wanna draw the top first
	for(int i = 0; i < height; i++)
		ft_putchar(TOP);
	for(int i = 0; i < height; i++)
	{
		if(i == 0 || i == (height  - 1))
			ft_putchar(EDGE);
	}
}

int		main(int argc, char *argv[])
{
	
	return(0);
}

