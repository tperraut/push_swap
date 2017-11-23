
#include "checker.h"
#include <stdio.h> //DEBUG
#include <stdlib.h> //DEBUG

int	main(int ac, char **av)
{
	int	a[ac];
	int	i;

	i = 0;
	ac--;
	while (i < ac)
	{
		a[i] = atoi(av[i + 1]);
		i++;
	}
	i = 0;
	while (i < ac)
	{
		printf("%d\n", a[i]);
		i++;
	}
	return (1);
}
