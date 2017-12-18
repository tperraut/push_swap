
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
		i = max;
		t[ac] = ft_stratoi(&(av[ac]));
		while (--i > ac)
			if (t[ac] == t[i])
				ft_error(ER_MSG);
		a.push(ft_create_elem(t[ac]), &a);
	}
	while ((rd = get_next_line(STDIN, &line)) > 0)
		if (ft_execute(line, &a, &b) < 0)
			ft_error(ER_MSG);
		else
		{
			ft_printstack(&a); //DEBUG
			ft_printstack(&b); //DEBUG
			free(line);
		}
	if (rd < 0)
		ft_error(ER_MSG);
	ft_issort(&a, &b);
	ft_freestack(&a);
	ft_freestack(&b);
	return (1);
}
