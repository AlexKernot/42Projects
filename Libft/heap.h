/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heap.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:55:46 by akernot           #+#    #+#             */
/*   Updated: 2023/11/18 18:39:16 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAP_H
# define HEAP_H

# include "int_vector.h"

typedef struct s_heap
{
	t_int_vector	*data;
	int				(*sort)(int, int);
}	t_heap;

#endif