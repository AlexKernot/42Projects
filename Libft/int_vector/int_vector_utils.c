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

#include "../int_vector.h"

#include <stdlib.h>

void	int_vector_set(t_int_vector *vector, int index, int data)
{
	if (index < 0)
		return ;
	if (index > vector->capacity)
		return ;
	free(vector->array[index]);
	vector->array[index] = data;
}

t_optional	int_vector_get(t_int_vector *vector, int index)
{
	t_optional	retval;

	retval.exists = 0;
	if (vector == NULL)
		return (retval);
	if (vector->array == NULL || vector->size < 1)
		return (retval);
	if (index >= vector->size)
		return (retval);
	retval.value = vector->array[index];
	retval.exists = 1;
	return (retval);
}

t_optional	int_vector_front(t_int_vector *vector)
{
	return (int_vector_get(vector, 0));
}

t_optional	int_vector_end(t_int_vector *vector)
{
	int			index;
	t_optional	retval;

	retval.exists = 0;
	if (vector == NULL)
		return (retval);
	index = vector->size - 1;
	return (int_vector_get(vector, index));
}
