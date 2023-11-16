/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:48:05 by akernot           #+#    #+#             */
/*   Updated: 2023/10/26 18:00:24 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include "libft.h"

t_bool	ft_putchar_fd(const char c, const int fd);
t_bool	ft_putstr_fd(const char *s, const int fd);
t_bool	ft_putendl_fd(const char *s, const int fd);
t_bool	ft_putnbr_fd(const int n, const int fd);

t_bool	ft_putstr(const char *string);
t_bool	ft_putchar(const char c);
t_bool	ft_putendl(const char *s);
t_bool	ft_putnbr(const int n);

int		ft_printf(const char *format, ...);

#endif