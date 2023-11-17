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

#include "stack.h"
#include "libft.h"
#include <stdlib.h>

/* Creates a new vector and suspends the stack in the middle of it.           */
/* The stack is padded on both sides for this project only. It provides a way */
/* to rotate the stack stack_size/2 rotations before needing to shift the     */
/* stack. This padding will be removed for a normal stack.                    */
t_stack	*stack_ctor(int stack_size)
{
	t_stack	*new_stack;

	new_stack = (t_stack *)malloc(sizeof(t_stack));
	if (new_stack == NULL)
		return (NULL);
	new_stack->data = vector_ctor(stack_size);
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
		vector_dtor(&stack->data);
	free(*this_stack);
	*this_stack = NULL;
}

void	stack_push(t_stack *this_stack, int number)
{
	t_packet	*data;

	if (this_stack == NULL || this_stack->data == NULL
		|| this_stack->data->array == NULL)
		return ;
	if (this_stack->stack_head + 1 >= this_stack->data->capacity)
		vector_resize(&this_stack->data, this_stack->data->capacity * 2);
	data = this_stack->data->array;
	data[this_stack->stack_head + 1].number = number;
	++(this_stack->data->size);
	++(this_stack->stack_head);
	data->flag = 1;
	data->cost = 0;
}

int	stack_pop(t_stack *this_stack)
{
	int			number;
	t_packet	*data;

	if (this_stack == NULL || this_stack->data == NULL
		|| this_stack->data->array == NULL)
		return (0);
	if (this_stack->stack_head == 0)
		return (0);
	data = this_stack->data->array;
	number = data[this_stack->stack_head].number;
	data[this_stack->stack_head].number = 0;
	data->flag = 0;
	data->cost = 0;
	--(this_stack->stack_head);
	--(this_stack->data->size);
	return (number);
}
