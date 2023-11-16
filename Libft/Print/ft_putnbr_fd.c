/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 13:39:23 by akernot           #+#    #+#             */
/*   Updated: 2023/10/26 18:00:51 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	int_to_char(long number, char **str, int pos)
{
	if (number < 0)
	{
		str[0][0] = '-';
		number = -number;
		pos++;
	}
	if (number >= 10)
		int_to_char(number / 10, str, pos - 1);
	if (pos < 0 || pos > 11)
		return ;
	str[0][pos] = (number % 10) + '0';
}

void	ft_putnbr_fd(int n, int fd)
{
	char	*num_point;
	char	number[12];
	int		copy;
	int		length;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	copy = n;
	length = 0;
	if (copy < 0)
		copy = -copy;
	while (copy)
	{
		length++;
		copy /= 10;
	}
	num_point = &number[0];
	int_to_char((long)n, &num_point, length - 1);
	ft_putstr_fd(num_point, fd);
	return ;
}
