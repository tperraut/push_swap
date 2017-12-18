/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freestack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperraut <tperraut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 15:45:22 by tperraut          #+#    #+#             */
/*   Updated: 2017/12/18 16:12:14 by tperraut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "checker.h"

void	ft_freestack(t_stack *s)
{
	t_elem	*e;

	if (!(s->head))
		return ;
	e = s->head;
	s->head = (s->head)->prev;
	while ((s->head)->prev != e)
	{
		s->head = (s->head)->prev;
		free((s->head)->next);
	}
	free(s->head);
	free(e);
}
