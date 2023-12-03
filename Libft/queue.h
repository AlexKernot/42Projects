/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:20:07 by akernot           #+#    #+#             */
/*   Updated: 2023/12/03 17:42:29 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H
# define QUEUE_H

# include "vector.h"


/* A LIFO (Last In First Out) datastructure that holds void pointers in an    */
/* internal vector. Calling queue_push will append data to the end of the     */
/* queue and queue_pop will remove data from the front of the queue and       */
/* returns it. Only the front of the queue should be accessed however the     */
/* underlying vector can be directly accessed if required.                    */
typedef struct queue
{
	t_vector	*data;
	int			head;
}	t_queue;

/* Allocates memory for a new queue on the heap with */
/* with an initial capacity of 'queue_size' */
t_queue	*queue_ctor(int queue_size);

/* Frees the queue and vector inside the queue, setting the pointers to NULL. */
void	queue_dtor(t_queue **this_queue);

/* Pushes the pointer 'data' onto the end of the queue. */
/* This is typically known as an enqueue operation. */
void	queue_push(t_queue *this_queue, void *data);

/* Removes the data at the front of the queue and returns it. */
/* This is commonly known as a dequeue operation. */
void	*queue_pop(t_queue *this_queue);

/* Returns the data at the front of the queue. */
void	*queue_front(t_queue *this_queue);

#endif