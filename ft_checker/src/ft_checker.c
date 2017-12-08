
#include "checker.h"
#include <stdio.h> //DEBUG
#include <stdlib.h> //DEBUG

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	t_elem	*e;

	ft_init_stack(&a);
	ft_init_stack(&b);
	while (--ac)
		a.push(ft_create_elem(atoi(av[ac])), &a); //TODO Free elem at the end
	e = a.head;
	if (e)
	{
	while (e->prev != a.head)
	{
		printf("%d\n", e->data);
		e = e->prev;
	}
	printf("%d\n", e->data);
	}
	return (1);
}
