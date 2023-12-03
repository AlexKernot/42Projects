/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:55:46 by akernot           #+#    #+#             */
/*   Updated: 2023/12/03 17:54:13 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAP_H
# define HEAP_H

# include "vector.h"

/* HEAP STILL WORK IN PROGRESS*/
typedef struct s_heap
{
	t_vector	*data;
	int			(*sort)(int, int);
}	t_heap;

#endif