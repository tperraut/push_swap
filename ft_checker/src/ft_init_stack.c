/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperraut <tperraut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 11:11:02 by tperraut          #+#    #+#             */
/*   Updated: 2017/12/15 13:30:19 by tperraut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void		push(t_elem *e, t_stack *s)
{
	if (!e)
		return ;
	if (!(s->head))
	{
		s->head = e;
		(s->head)->next = e;
		(s->head)->prev = e;
		return ;
	}
	e->prev = s->head;
	e->next = (s->head)->next;
	((s->head)->next)->prev = e;
	(s->head)->next = e;
	s->head = e;
}

static t_elem	*pop(t_stack *s)
{
	t_elem	*e;

	if (!(s->head))
		return (NULL);
	e = s->head;
	if (e == e->next)
		s->head = NULL;
	else
	{
		(e->prev)->next = e->next;
		s->head = e->prev;
		((s->head)->next)->prev = s->head;
	}
	return (e);
}

static void		rotate(t_stack *s)
{
	if (s->head)
		s->head = (s->head)->prev;
}

static void		rrotate(t_stack *s)
{
	if (s->head)
		s->head = (s->head)->next;
}

void			ft_init_stack(t_stack *s){
	s->head = NULL;
	s->push = &push;
	s->pop = &pop;
	s->rot = &rotate;
	s->rrot = &rrotate;
}
