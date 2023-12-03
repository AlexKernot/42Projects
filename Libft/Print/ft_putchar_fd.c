/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:45:05 by akernot           #+#    #+#             */
/*   Updated: 2023/12/03 18:04:58 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../print.h"
#include "libft.h"

#include <unistd.h>

t_bool	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
