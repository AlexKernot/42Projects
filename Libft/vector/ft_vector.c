/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:24:45 by akernot           #+#    #+#             */
/*   Updated: 2023/11/17 18:35:06 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vector.h"

#include <stdlib.h>
#include <unistd.h>

t_vector	*vector_ctor(int capacity)
{
	t_vector	*new;
	t_packet	*array;
	int			i;

	new = (t_vector *)malloc(sizeof(t_vector));
	array = (t_packet *)malloc(sizeof(t_packet) * capacity);
	new->array = array;
	new->size = 0;
	new->capacity = capacity;
	i = 0;
	while (i < capacity)
	{
		array[i].flag = 0;
		array[i].cost = 0;
		++i;
	}
	return (new);
}

void	vector_dtor(t_vector **vector)
{
	if (vector == 0 || *vector == 0)
		return ;
	if ((*vector)->array == 0)
		return ;
	free((*vector)->array);
	free(*vector);
	*vector = 0;
}

void	vector_resize(t_vector **vector, int size)
{
	t_vector	*vector_ptr;
	t_packet	*new_array;
	int			i;
	int			old_capacity;

	vector_ptr = *vector;
	old_capacity = vector_ptr->capacity;
	new_array = (t_packet *)malloc(sizeof(t_packet) * size);
	vector_ptr->capacity = size;
	i = 0;
	if (vector_ptr->size > size)
		vector_ptr->size = size;
	while (i < old_capacity && i < size)
	{
		new_array[i].number = vector_ptr->array[i].number;
		new_array[i].flag = vector_ptr->array[i].flag;
		new_array[i].cost = vector_ptr->array[i].cost;
		++i;
	}
	free(vector_ptr->array);
	vector_ptr->array = new_array;
}

void	vector_add_back(t_vector *vector, int data)
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
	vector->array[vector->size].number = data;
	vector->array[vector->size].flag = 1;
	vector->array[vector->size].cost = 0;
	vector->size += 1;
}

int	vector_delete_back(t_vector *vector)
{
	int	num;

	if (vector->size == 0)
		return (0);
	num = vector->array[vector->size - 1].number;
	vector->array[vector->size - 1].number = 0;
	vector->array[vector->size - 1].flag = 0;
	vector->size -= 1;
	return (num);
}
