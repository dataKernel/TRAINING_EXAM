#include <stdio.h>
#include <stdlib.h> //malloc library


char	*ft_concat(int argc, char **argv)
{
	char	*str;

	printf("check argc: %i\n", argc);
	printf("========================\n");
	printf("check argv: %s\n", argv[0]);
	return(str);
}

int		main(int argc, char **argv)
{
	char	*str;

	str = "data";

	printf("(pre): %s", str);
	str = ft_concat(argc, argv);
	printf("(post): %s", str);
	return(0);
}