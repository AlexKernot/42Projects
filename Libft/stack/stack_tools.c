/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_tools.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:41:40 by akernot           #+#    #+#             */
/*   Updated: 2023/07/30 00:13:09 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack_tools.h"

#include "stack.h"

t_packet	*get(t_stack *stack, t_packet *(*funct)(t_packet *a, t_packet *b))
{
	t_packet	*array;
	t_packet	*target;
	int			size;
	int			i;

	array = stack->data->array;
	target = &array[stack->stack_tail];
	size = stack->data->size;
	i = 0;
	while (i < size)
	{
		target = funct(target, &array[i + stack->stack_tail]);
		++i;
	}
	return (target);
}

int	get_lowest_cost(t_stack *a)
{
	int			i;
	int			cost;
	int			cost_index;
	t_packet	*array;

	array = &a->data->array[a->stack_tail];
	cost = array[0].cost;
	cost_index = 0;
	i = 0;
	while (i < a->data->size)
	{
		if (array[i].cost < cost)
		{
			cost = array[i].cost;
			cost_index = i;
		}
		++i;
	}
	return (cost_index + a->stack_tail);
}

t_packet	*smallest(t_packet *a, t_packet *b)
{
	if (a->number < b->number)
		return (a);
	return (b);
}

t_packet	*biggest(t_packet *a, t_packet *b)
{
	if (a->number > b->number)
		return (a);
	return (b);
}

