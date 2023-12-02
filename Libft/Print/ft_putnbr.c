/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:59:03 by akernot           #+#    #+#             */
/*   Updated: 2023/11/30 17:26:26 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

#include "libft.h"

static t_bool	int_to_char(long number, char **str, int pos)
{
	if (number < 0)
	{
		str[0][0] = '-';
		number = -number;
		pos++;
	}
	if (number >= 10)
		int_to_char(number / 10, str, pos - 1);
	ft_putchar((number) % 10 + '0');
	str[0][pos] = (number % 10) + '0';
}

t_bool	ft_putnbr_fd(int n, int fd)
{
	
	return ;
}
