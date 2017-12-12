
#include "checker.h"
#include "libft.h"
#include <stdio.h> //DEBUG
#include <stdlib.h> //DEBUG

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	//t_elem	*e;
	int		rd;
	char	*line;

	line = NULL;
	ft_init_stack(&a);
	ft_init_stack(&b);
	while (--ac)
		a.push(ft_create_elem(ft_satoi(av[ac])), &a); //TODO Free elem at the end
	/*
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
	 */
	while ((rd = get_next_line(STDIN, &line)) > 0)
		if (ft_execute(line, &a, &b) < 0)
			ft_error(ER_MSG);
	if (rd < 0)
		ft_error(ER_MSG);
	return (1);
}
