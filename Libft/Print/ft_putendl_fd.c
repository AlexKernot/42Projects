/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:46:29 by akernot           #+#    #+#             */
/*   Updated: 2023/10/26 17:58:24 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

t_bool	ft_putendl_fd(char *s, int fd)
{
	if (s == 0)
		return (false);
	if (ft_putstr_fd(s, fd) == false)
		return (false);
	if (ft_putchar_fd('\n', fd) == false)
		return (false);
}
