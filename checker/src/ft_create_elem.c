/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperraut <tperraut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 14:56:17 by tperraut          #+#    #+#             */
/*   Updated: 2017/12/07 15:08:34 by tperraut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_elem	*ft_create_elem(int n)
{
	t_elem	*e;

	if (!(e = (t_elem *)malloc(sizeof(t_elem))))
		return (NULL); //TODO Do something on perror
	e->data = n;
	return (e);
}
