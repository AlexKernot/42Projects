/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:17:51 by akernot           #+#    #+#             */
/*   Updated: 2023/07/29 15:35:32 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stack.h"
#include "libft.h"
#include <stdlib.h>

t_stack	*stack_ctor(int stack_size)
{
	t_stack	*new_stack;

	new_stack = (t_stack *)malloc(sizeof(t_stack));
	if (new_stack == NULL)
		return (NULL);
	new_stack->data = int_vector_ctor(stack_size);
	return (new_stack);
}

/* Frees the stack and vector inside the stack, setting the pointers to NULL. */
void	stack_dtor(t_stack **this_stack)
{
	t_stack	*stack;

	if (this_stack == NULL)
		return ;
	stack = *this_stack;
	if (stack == NULL)
		return ;
	if (stack->data != NULL)
		int_vector_dtor(&stack->data);
	free(*this_stack);
	*this_stack = NULL;
}

void	stack_push(t_stack *this_stack, const int number)
{
	t_int_vector	*data;
	int				*new;

	if (this_stack == NULL || this_stack->data == NULL
		|| this_stack->data->array == NULL)
		return ;
	data = this_stack->data;
	int_vector_push_back(data, number);
}

t_optional	stack_pop(t_stack *this_stack)
{
	t_optional		retval;
	t_int_vector	*vector;
	int				vector_size;
	t_optional		data;

	retval.exists = false;
	if (this_stack == NULL || vector == NULL
		|| vector->array == NULL)
		return (retval);
	if (vector_size == 0)
		return (retval);
	vector = this_stack->data;
	vector_size = vector->size;
	data = int_vector_end(vector);
	(vector->size)--;
	return (data);
}

t_optional	stack_front(t_stack *this_stack)
{
	t_optional		retval;
	t_int_vector	*vector;
	int				index;

	retval.exists = false;
	if (this_stack == NULL)
		return (retval);
	if (this_stack->data == NULL)
		return (retval);
	if (this_stack->data->array == NULL || this_stack->data->size == 0)
		return (retval);
	vector = this_stack->data;
	return (int_vector_front(vector));
}
