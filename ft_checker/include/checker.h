#ifndef __CHECKER_H__
# define __CHECKER_H__
# include <stdlib.h>

#define OK_MSG "OK\n"
#define KO_MSG "KO\n"


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
void	ft_2swap(t_stack *s1, t_stack *s2);
t_elem	*ft_create_elem(int n);
int		ft_execute(char *s, t_stack *a, t_stack *b);
void	ft_printstack(t_stack *s);
void	ft_freestack(t_stack *s);
void	ft_issort(t_stack *s1, t_stack *s2);

#endif
