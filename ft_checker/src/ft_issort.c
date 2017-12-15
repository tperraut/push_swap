/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperraut <tperraut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 13:54:25 by tperraut          #+#    #+#             */
/*   Updated: 2017/12/15 14:05:28 by tperraut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "libft.h"

void	ft_issort(t_stack *s1, t_stack *s2)
{
	t_elem	*e;


	if (s2->head)
		ft_putstr(KO_MSG);
	else if (!(s1->head))
		ft_putstr(OK_MSG);
	else
	{
		e = s1->head;
		while (e->prev != s1->head)
		{
			if (e->data > (e->prev)->data)
			{
				ft_putstr(KO_MSG);
				return ;
			}
			e = e->prev;
		}
		ft_putstr(OK_MSG);
	}
}
