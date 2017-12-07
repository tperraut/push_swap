#ifndef __CHECKER_H__
# define __CHECKER_H__
# include <stdlib.h>

typedef struct	s_elem
{
	int		data;
	struct s_elem	*next;
	struct s_elem	*prev;
}				t_elem;

typedef struct	s_stack
{
	t_elem	*head;
	void	(*push)(t_elem *e, struct s_stack *s);
	void	(*rot)(struct s_stack *s);
	void	(*rrot)(struct s_stack *s);
	t_elem	*(*pop)(struct s_stack *s);
}				t_stack;

void	ft_init_stack(t_stack *s);
void	ft_swap(t_stack *s);
t_elem	*ft_create_elem(int n);

#endif
