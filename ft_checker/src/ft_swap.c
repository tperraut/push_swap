/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperraut <tperraut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 11:14:22 by tperraut          #+#    #+#             */
/*   Updated: 2017/12/15 13:42:15 by tperraut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_swap(t_stack *s)
{
	int	tmp;

	if (s->head == (s->head)->next)
		return ;
	tmp = (s->head)->data;
	(s->head)->data = ((s->head)->prev)->data;
	((s->head)->prev)->data = tmp;
}
