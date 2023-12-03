/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:55:39 by akernot           #+#    #+#             */
/*   Updated: 2023/12/03 18:04:56 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../print.h"
#include "libft.h"

#include <unistd.h>

t_bool	ft_putchar(const char c)
{
	return (write(1, &c, 1));
}
