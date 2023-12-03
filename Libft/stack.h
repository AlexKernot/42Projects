/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:26:56 by akernot           #+#    #+#             */
/*   Updated: 2023/12/02 13:32:00 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "vector.h"
# include "optional.h"

/* A last in first out data structure that creates a vector of            */
/* integer pointers. the output of stack_pop() needs to be freed.         */
/* On destruction, stack_dtor() will clean up all data held by the stack. */
typedef struct s_stack
{
	t_vector	*data;
}	t_stack;

/* Creates a new stack on the heap and returns a pointer to it. */
t_stack	*stack_ctor(int stack_size);

/* Frees the stack, and and all contained data. This function invalidates */
/* all pointers to this stack and inside data. */
/* It also sets the passed in pointer to stack to NULL. */
void	stack_dtor(t_stack **this_stack);

/* Adds the given void * to the top of the stack */
void	stack_push(t_stack *this_stack, void *data);

/* Removes the number on the top of the stack and returns it. */
void	*stack_pop(t_stack *this_stack);

/* Returns the value at the top of the stack. */
/* This function may return NULL. */
void	*stack_front(t_stack *this_stack);

#endif