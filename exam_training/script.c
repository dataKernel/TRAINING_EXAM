#include <stdio.h>
#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi_base(const char *str, int strBase)
{
	const char	*baseFixed;
	int			res;
	int			i;

	baseFixed = "0123456789abcdef";
	res = 0;
	i = 0;
	while(i < strBase)
	{
		printf("%c__", baseFixed[i]);
		i++;
	}
	return(res);
}


int		main(void)
{
	int		n;

	n = ft_atoi_base("ff", 10);
	return(0);
}