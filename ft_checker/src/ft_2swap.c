/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperraut <tperraut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 11:19:21 by tperraut          #+#    #+#             */
/*   Updated: 2017/12/07 14:23:57 by tperraut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_2swap(t_stack *s1, t_stack *s2)
{
	ft_swap(s1);
	ft_swap(s2);
}
