
#include "checker.h"
#include <stdio.h> //DEBUG
#include <stdlib.h> //DEBUG

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	t_elem	*e;
	int	i;

	ft_init_stack(&a);
	ft_init_stack(&b);
	i = 0;
	ac--;
	while (i < ac)
	{
		a.push(ft_create_elem(atoi(av[i + 1])), &a);
		i++;
	}
	e = a.head;
	while (e->prev != a.head)
	{
		printf("%d\n", e->data);
		e = e->prev;
	}
	return (1);
}
