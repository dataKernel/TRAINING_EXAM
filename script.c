#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

struct 		s_node
{
	int		_val;
	int		_valbis;
};

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	struct 		s_node a = {._valbis = 42};
	struct 		s_node z, w;

	printf("a(val):%i__a(valbis):%i\n", a._val, a._valbis);
	printf("z(val):%i__z(valbis):%i\n", z._val, z._valbis);
	printf("w(val):%i__w(valbis):%i\n", w._val, w._valbis);
	return(0);
}