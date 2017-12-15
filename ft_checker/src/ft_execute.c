/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperraut <tperraut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 11:12:14 by tperraut          #+#    #+#             */
/*   Updated: 2017/12/15 13:43:38 by tperraut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"

static int	swap_mod(char *s, t_stack *a, t_stack *b)
{
	if (!*s || *(s + 1))
		return (ER);
	if (*s == 's')
		ft_2swap(a, b);
	else if (*s == 'a')
		ft_swap(a);
	else if (*s == 'b')
		ft_swap(b);
	else
		return (ER);
	return (OK);
}

static int	push_mod(char *s, t_stack *a, t_stack *b)
{
	if (!*s || *(s + 1))
		return (ER);
	if (*s == 'a')
		a->push(b->pop(b), a);
	else if (*s == 'b')
		b->push(a->pop(a), b);
	else
		return (ER);
	return (OK);
}

static int	reverse_mod(char *s, t_stack *a, t_stack *b)
{
	if (*(s + 1))
		return (ER);
	if (*s == 'r')
	{
		a->rrot(a);
		b->rrot(b);
	}
	else if (*s == 'a')
		a->rrot(a);
	else if (*s == 'b')
		b->rrot(b);
	else
		return (ER);
	return (OK);
}

static int	rotate_mod(char *s, t_stack *a, t_stack *b)
{
	if (!*s)
		return (ER);
	if (*(s + 1))
		return (reverse_mod((s + 1), a, b));
	if (*s == 'r')
	{
		a->rot(a);
		b->rot(b);
	}
	else if (*s == 'a')
		a->rot(a);
	else if (*s == 'b')
		b->rot(b);
	else
		return (ER);
	return (OK);
}

int	ft_execute(char *s, t_stack *a, t_stack *b)
{
	if (!s)
		return (ER);
	if (*s == 's')
		return (swap_mod((s + 1), a, b));
	if (*s == 'p')
		return (push_mod((s + 1), a, b));
	if (*s == 'r')
		return (rotate_mod((s + 1), a, b));
	return (ER);
}
