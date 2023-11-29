/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_vector.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:16:06 by akernot           #+#    #+#             */
/*   Updated: 2023/11/18 18:34:17 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_VECTOR_H
# define INT_VECTOR_H

# include "optional.h"

typedef struct s_int_vector
{
	int	*array;
	int	capacity;
	int	size;
}	t_int_vector;

/* Creates a vector with a pointer to an array of ints of size capacity       */
t_int_vector	*int_vector_ctor(int capacity);

/* Frees the entire array and node. Setting the pointer to NULL.              */
void			int_vector_dtor(t_int_vector **vector);

/* Adds an integer to the end of the int array, resizing if nessecary.        */
/* This function returns the new size of the array. */
void			int_vector_push_back(t_int_vector *vector, int data);

/* Removes the last index from the array.                                     */
void			int_vector_pop_back(t_int_vector *vector);

/* Resizes the vector to size, copying the data from the old array into the   */
/* new one. This will only copy size bytes of data into the new array,        */
/* deleting all extra bytes.                                                  */
void			int_vector_resize(t_int_vector *vector, int size);

/* Inserts data at index. This function will overwrite data.                  */
void			int_vector_set(t_int_vector *vector, int index, int data);

/* Returns a pointer to the t_packet at index, or NULL if failed.             */
t_optional		int_vector_get(t_int_vector *vector, int index);

/* Returns the value at the front of the vector. */
t_optional		int_vector_front(t_int_vector *vector);

/* Returns a pointer to the value at the end of the vector.                   */
t_optional		int_vector_end(t_int_vector *vector);


#endif