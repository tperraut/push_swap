
#include "checker.h"
#include "libft.h"
#include <stdio.h> //DEBUG
#include <stdlib.h> //DEBUG

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	int		t[ac];
	int		max;
	int		rd;
	int		i;
	char	*line;

	line = NULL;
	max = ac;
	ft_init_stack(&a);
	ft_init_stack(&b);
	printf("%d\n", ac); //DEBUG
	while (--ac)
	{
		//TODO Add is_contain for stack
		i = max;
		t[ac] = ft_stratoi(&(av[ac]));
		while (--i > ac)
			if (t[ac] == t[i])
				ft_error(ER_MSG);
		a.push(ft_create_elem(t[ac]), &a); //TODO Free elem at the end
	}
	while ((rd = get_next_line(STDIN, &line)) > 0)
		if (ft_execute(line, &a, &b) < 0)
			ft_error(ER_MSG);
		else
		{
			ft_printstack(&a);
			ft_printstack(&b);
		}
	if (rd < 0)
		ft_error(ER_MSG);
	ft_issort(&a, &b);
	return (1);
}
