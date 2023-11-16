/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:43:12 by akernot           #+#    #+#             */
/*   Updated: 2023/10/26 17:51:22 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

#include "libft.h"

t_bool	ft_putstr(const char *string)
{
	int	i;

	if (string == NULL)
		return (false);
	i = 0;
	while (string[i] != 0)
	{
		if (ft_putchar(string[i]) != true)
			return (false);
		i++;
	}
	return (true);
}
