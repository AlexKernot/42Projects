/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:46:29 by akernot           #+#    #+#             */
/*   Updated: 2023/10/26 18:00:21 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

t_bool	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s == NULL)
		return (false);
	i = 0;
	while (s[i] != 0)
	{
		if (ft_putchar_fd(s[i], fd) == false)
			return (false);
		i++;
	}
	return (true);
}
