/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperraut <tperraut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 13:31:15 by tperraut          #+#    #+#             */
/*   Updated: 2017/12/15 13:38:24 by tperraut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"

void	ft_printstack(t_stack *s)
{
	t_elem	*e;

	e = s->head;
	if (e)
	{
		while (e->prev != s->head)
		{
			ft_putnbr(e->data);
			ft_putchar('\n');
			e = e->prev;
		}
		ft_putnbr(e->data);
		ft_putchar('\n');
	}
	ft_putchar('\n');
}
