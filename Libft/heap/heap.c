/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:56:53 by akernot           #+#    #+#             */
/*   Updated: 2023/12/03 17:53:55 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "../heap.h"

#include <stdlib.h>

t_heap	*heap_ctor(int heap_size, int (*sort)(int, int))
{
	t_heap *const	new_heap = (t_heap*)malloc(sizeof(t_heap));

	new_heap->sort = sort;
	new_heap->data = int_vector_ctor(heap_size);
	return (new_heap);
}

int	heap_parent(t_heap *this_heap, const int index)
{
	const int	parent = (index - 1) / 2;

	return (vector_get(this_heap->data, parent));
}

void	heapify_number(t_heap *this_heap, void *data)
{
	int	index;

	index = this_heap->data->size;
	int_vector_push_back(this_heap->data, value);
	while (this_heap->sort(heap_parent(this_heap, index), value) == 1)
	{
		void
	}
}

void	heapify_array(t_heap *this_heap, const int array_size, int	*array)
{
	int	i;

	i = 0;
	while (i < array_size)
	{
		heapify_number(this_heap, array[i]);
		++i;
	}
}

int	heap_max(int a, int b)
{
	return (a < b);
}

int	heap_min(int a, int b)
{
	return (a > b);
}*/
