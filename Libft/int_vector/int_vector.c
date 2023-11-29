/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_vector.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:24:45 by akernot           #+#    #+#             */
/*   Updated: 2023/11/18 18:36:11 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../int_vector.h"

#include <stdlib.h>
#include <unistd.h>

t_int_vector	*int_vector_ctor(int capacity)
{
	t_int_vector	*new;
	void			**array;
	int				i;

	new = (t_int_vector *)malloc(sizeof(t_int_vector));
	array = malloc(sizeof(*(new->array)) * capacity);
	new->array = array;
	new->size = 0;
	new->capacity = capacity;
	i = 0;
	while (i < capacity)
	{
		array[i] = 0;
	}
	return (new);
}

void	int_vector_dtor(t_int_vector **vector)
{
	int	i;

	if (vector == 0 || *vector == 0)
		return ;
	if ((*vector)->array == 0)
		return ;
	free((*vector)->array);
	free(*vector);
	*vector = NULL;
}

void	int_vector_resize(t_int_vector *vector, int size)
{
	int	*new_array;
	int	i;

	new_array = malloc(sizeof(*(vector->array)) * size);
	i = 0;
	if (vector->size > size)
		vector->size = size;
	while (i < vector->capacity && i < size)
	{
		new_array[i] = vector->array[i];
		++i;
	}
	vector->capacity = size;
	free(vector->array);
	vector->array = new_array;
}

void	int_vector_push_back(t_int_vector *vector, void *data)
{
	if (vector->size + 1 == vector->capacity)
	{
		vector_resize(&vector, vector->capacity * 2);
		if (vector->array == NULL)
		{
			write(2, "Vector resize failed.\n", 22);
			return ;
		}
	}
	vector->array[vector->size] = data;
	vector->size += 1;
}

void	int_vector_pop_back(t_int_vector *vector)
{
	const int	index = vector->size - 1;
	void		*data;

	if (vector->size == 0)
		return (0);
	data = vector->array[index];
	vector->array[index] = NULL;
	vector->size--;
	free(data);
}
