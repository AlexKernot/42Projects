/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42Adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 14:38:29 by akernot           #+#    #+#             */
/*   Updated: 2023/12/02 13:23:59 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_H
# define CONVERT_H

# include <stdint.h>

int64_t	num_convert(char *str);
int		ft_atoi(char *str);
char	*ft_itoa(int num);
char	*ft_ltoa(long num);
char	*ft_uitoa(unsigned int num);
char	*ft_uitox(unsigned int num);
char	*ft_ultoa(unsigned long num);

#endif