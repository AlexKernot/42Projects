/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 18:38:25 by akernot           #+#    #+#             */
/*   Updated: 2023/11/17 19:09:04 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct s_vector
{
	void	**array;
	int		capacity;
	int		size;
}	t_vector;

/* Creates a vector with a pointer to an array of ints of size capacity       */
t_vector	*vector_ctor(int capacity);

/* Frees the entire array and node. Setting the pointer to NULL.              */
void		vector_dtor(t_vector **vector);

/* Adds an integer to the end of the int array, resizing if nessecary.        */
/* This function returns the new size of the array. */
void		vector_push_back(t_vector *vector, void *data);

/* Removes the last index from the array.                                     */
void		vector_pop_back(t_vector *vector);

/* Resizes the vector to size, copying the data from the old array into the   */
/* new one. This will only copy size bytes of data into the new array,        */
/* deleting all extra bytes.                                                  */
void		vector_resize(t_vector *vector, int size);

/* Inserts data at index. This function will overwrite data.                  */
void		vector_set(t_vector *vector, int index, void *data);

/* Returns a pointer to the t_packet at index, or NULL if failed.             */
void		*vector_get(t_vector *vector, int index);

/* Returns a pointer to the value at the end of the vector.                   */
void		*vector_end(t_vector *vector);

#endif