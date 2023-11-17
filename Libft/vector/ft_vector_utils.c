/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@42adel.org.au>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:32:32 by akernot           #+#    #+#             */
/*   Updated: 2023/07/26 16:42:10 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

void	vector_set(t_vector *vector, int index, int data)
{
	if (index < 0)
		return ;
	if (index > vector->capacity)
		return ;
	vector->array[index].number = data;
	vector->array[index].flag = 1;
}

t_packet	*vector_get(t_vector *vector, int index)
{
	if (index > vector->capacity)
		return (0);
	if (index < 0)
		return (0);
	return (&vector->array[index]);
}
