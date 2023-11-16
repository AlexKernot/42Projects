/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:56:31 by akernot           #+#    #+#             */
/*   Updated: 2023/10/26 17:57:41 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

t_bool	ft_putendl(char *s)
{
	if (s == NULL)
		return ;
	if (ft_putstr(s) == false)
		return (false);
	if (ft_putchar('\n') == false)
		return (false);
	return (true);
}